#include <stdio.h>
#include <math.h>

int min(int x, int y) {
    return (x < y) ? x : y;
}

int steps(int n) {
    return ceil(log2(n));
}

void solve() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    // Calculate first slice (with possibly non-optimal position)
    int dist_left = a - 1;
    int dist_right = n - a; 
    int dist_top = b - 1;
    int dist_bottom = m - b;

    int min_row = min(dist_top, dist_bottom);
    int min_col = min(dist_left, dist_right);

    // Determine to slice row or column by comparing amount of steps saved from initial steps 
    if (steps(n) - steps(min_col + 1) > steps(m) - steps(min_row + 1)) 
        n = min_col + 1;
    else 
        m = min_row + 1;

    // Calculate second slice and more (with optimal position) - Slices by half each time
    int move = 1 + steps(n) + steps(m);
    printf("%d\n", move);
}   

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}