#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", (a % b) ? b - (a % b) : 0);
    }
    return 0;
}