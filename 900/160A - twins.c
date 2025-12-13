#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], count[101] = {0}, total = 0; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
        total += a[i];
    }

    int minimum = total / 2;
    int amount = 0, sum = 0;
    for (int i = 100; i > 0; i--) {
        while (count[i]) {
            if (sum > minimum) break;
            amount++;
            sum += i;
            count[i]--;
        }
        if (sum > minimum) break;
    }

    printf("%d", amount);
    return 0;
}