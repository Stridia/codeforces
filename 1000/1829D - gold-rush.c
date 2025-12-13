#include <stdio.h>

int operation(int n, int m) {
    if (n == m) return 1;
    else if (n < m || n % 3) return 0;
    return operation(n / 3, m) + operation(n * 2 / 3, m);
}

void solve() {
    int n, m;
    scanf("%d %d", &n, &m);
    int isPossible = operation(n, m);
    printf((isPossible) ? "YES\n" : "NO\n");
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}