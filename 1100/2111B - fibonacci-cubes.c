#include <stdio.h>

int f[] = {0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void solve() {
    int n, m;
    scanf("%d %d", &n, &m);

    int width, length, height;
    char result[m+1];
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &width, &length, &height);
        if (length < height) swap(&length, &height);    // Sort the dimensions such that
        if (width < length) swap (&width, &length);     // width is the longest among them

        if (width >= f[n] + f[n-1] && length >= f[n] && height >= f[n]) 
            result[i] = '1';
        else 
            result[i] = '0';
    }

    result[m] = '\0';
    printf("%s\n", result);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}