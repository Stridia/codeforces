#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    // String input
    getchar();
    char s[n+1];
    fgets(s, sizeof(s), stdin);

    // Pair counting
    int a[26][26] = {0};
    for (int i = 0; i < n-1; i++) {
        int i1 = s[i] - 'A';
        int i2 = s[i+1] - 'A';
        a[i1][i2]++;
    }

    // Find the most frequent pair
    int count = 0;
    char pair[3];
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (a[i][j] > count) {
                count = a[i][j];
                pair[0] = i + 'A';
                pair[1] = j + 'A';
                pair[2] = '\0';
            }
        }
    }

    printf("%s\n", pair);
    return 0;
}