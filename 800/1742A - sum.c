#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);

    int result[n];
    for (int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        result[i] = 0;
        if (a + b == c || a + c == b || b + c == a) result[i]++;
    }

    for (int i = 0; i < n; i++) {
        if (result[i]) printf("YES\n");
        else printf("NO\n"); 
    }
    return 0;
}