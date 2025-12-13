#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n;
    scanf("%d", &n);

    int **a = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) a[i] = (int*)malloc(sizeof(int) * n);
    int *perm = (int*)malloc(2 * n * sizeof(int));
    int *count = (int*)calloc(2 * n, sizeof(int));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            perm[i+j+1] = a[i][j];
            count[a[i][j]-1]++;
        }
    }

    for (int i = 0; i < 2*n; i++) {
        if (!count[i]) {
            perm[0] = i+1;
            break;
        }
    }

    for (int i = 0; i < 2*n; i++) 
        printf("%d ", perm[i]);
        printf("\n");

    for(int i = 0; i < n; i++) free(a[i]);
    free(count);
    free(perm);
    free(a);
}


int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}