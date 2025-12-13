#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int *nilai = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) scanf("%d", &nilai[i]);

    int min = nilai[k-1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (nilai[i] < min || nilai[i] == 0) break;
        count++;
    }
    
    printf("%d", count);
    free(nilai);
    return 0;
}