#include <stdio.h>

calculate(int *offer, int length, int pos) {
    for (int i = 0; i < length; i++) {
        
    }
}

void solve() {
    int n, l, r;
    scanf("%d %d %d", &n, &l, &r);
    int *offer = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) scanf("%d", &offer[i]);

    // Calculate the max score of every possible position of Godflex
    long long max = 0;
    for (int i = l; i <= r; i++) {
        long long score = calculate(offer, n, i);
        if (score > max) max = score;
    }

    printf("%d\n", max);
    free(offer);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}