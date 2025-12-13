#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], max, min, count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (!i) max = min = a[i];
        if (a[i] > max) {
            count++;
            max = a[i];
        }
        if (a[i] < min) {
            count++;
            min = a[i];
        }
    }
    printf("%d", count);
    return 0;
}