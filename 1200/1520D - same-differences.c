#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n;
    scanf("%d", &n);

    int *deviation = (int*)calloc(2*n, sizeof(int));
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        // Find the deviation of each num from the order 1, 2, 3, ...
        int diff = num - (i + 1);
        if (diff >= 0)
            deviation[diff]++;      // Positive deviation
        else
            deviation[n-diff]++;    // Negative deviation
    }

    long long total_pairs = 0;
    for (int i = 0; i < 2*n; i++) {
        long long total_num = deviation[i];
        if (total_num-- > 1) 
            total_pairs += ((total_num * (1 + total_num)) / 2);     // Arithmetic series formula
    }

    printf("%lld\n", total_pairs);
    free(deviation);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}