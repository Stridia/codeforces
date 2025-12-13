#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], max = 0, min = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > a[max]) max = i;
        if (a[i] <= a[min]) min = i;
    }

    int result = max + (n - min - 1);
    printf("%d", (max > min) ? result - 1 : result);
    return 0;
}