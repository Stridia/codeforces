#include <stdio.h>
#include <stdlib.h>
#define ll long long

int compare(const void *a, const void *b) {
    ll arg1 = *(const ll*)a;
    ll arg2 = *(const ll*)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}  

void solve() {
    ll n, target_total;
    scanf("%lld %lld", &n, &target_total);

    // Input phase and sorting array
    ll a[n];
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    qsort(a, n, sizeof(ll), compare);
    
    ll current_total = 0;
    ll extra_presses = 0;
    ll prev_slot = 0;

    // Iterate over the sorted array
    for (int i = 0; i < n; i++) {
        a[i] -= prev_slot;
        
        // Count how many cans obtained when each slot is pressed once each turn
        ll in_turn_total = a[i] * (n-i);
        if (current_total + in_turn_total >= target_total) break;

        // If current total of cans is not enough to satisfy target, then add 1 to extra presses 
        extra_presses++;
        prev_slot += a[i];
        current_total += in_turn_total;
    }

    printf("%lld\n", target_total + extra_presses);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}