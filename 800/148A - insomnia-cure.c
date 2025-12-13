#include <stdio.h>

int main() {
    int k, l, m, n, d;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    int count = 0;
    for (int i = 1; i < d+1; i++) {
        if (!(i % k) || !(i % l) || !(i % m) || !(i % n)) count++;
    }

    printf("%d", count);
    return 0;
}