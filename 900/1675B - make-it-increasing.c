#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int total_operations = 0;
    for (int i = n-2; i >= 0; i--) {    // Starts at second to last element
        if (a[i+1] == 0) {
            printf("-1\n");
            return;
        }
        
        while (a[i] >= a[i+1] && a[i] > 0) {
            a[i] /= 2;
            total_operations++;
        }

        if (a[i] >= a[i+1]) {
            printf("-1\n");
            return;
        }
    }

    printf("%d\n", total_operations);
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--) solve();
    return 0;
}