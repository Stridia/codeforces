#include <stdio.h>
#define ll long long

void solve() {
    ll A, B;
    scanf("%lld %lld", &A, &B); 

    // Any A values are valid
    // Valid B values: 9, 99, 999, 9999, ...  
    ll total_B_values = 0;      
    ll B_value = 9;
    while (B_value <= B) {
        total_B_values++;
        if (B > 1e9) break;
        B_value = B_value * 10 + 9;
    }

    printf("%lld\n", A * total_B_values);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}