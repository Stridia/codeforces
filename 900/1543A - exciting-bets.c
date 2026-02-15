#include <stdio.h>

void solve() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    
    if (a == b) {
        printf("0 0\n");
        return;
    }

    // Max Excitement (GCD) is obtained from the difference between 2 numbers
    long long operation = 0;
    long long max_gcd = (a > b) ? a - b : b - a;

    long long rem = a % max_gcd;
    operation = (rem < max_gcd - rem) ? rem : max_gcd - rem;
    printf("%lld %lld\n", max_gcd, operation);
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--) solve();
    return 0;
}