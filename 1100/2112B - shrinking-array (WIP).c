#include <stdio.h>
#include <math.h>
#define MAX 99999999

void solve() {
    int n;
    scanf("%d", &n);

    int min, max;
    int num = -1, prev = -1;
    int moves = MAX, isPossible = 0;

    for (int i = 0; i < n; i++) {
        prev = num;
        scanf("%d", &num);
        if (!i) {
            min = max = num;
            continue;
        }

        if (abs(prev - num) <= 1) {
            isPossible = 1;
            moves = 0;
            continue;
        }
        if (num >= min - 1 && num <= max+1) isPossible = 1;
        min = (num < min) ? num : min;
        max = (num > max) ? num : max;
    }

    if (isPossible) printf("YES");
    else printf("NO");
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}
