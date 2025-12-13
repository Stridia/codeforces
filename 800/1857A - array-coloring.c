#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n; 
        scanf("%d", &n);

        int a[n], odd = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] % 2 == 1) odd++;
        }
        printf((odd % 2 == 1) ? "NO\n" : "YES\n");
    }
    return 0;
}