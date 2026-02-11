#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int bacteria = 0;
    while (n) {
        if (n % 2) bacteria++;
        n /= 2;
    }

    printf("%d", bacteria);
    return 0;
}