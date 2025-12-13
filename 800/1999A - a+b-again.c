#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int result[n];
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        result[i] = (a / 10) + (a % 10);
    }

    for (int i = 0; i < n; i++) printf("%d\n", result[i]);
    return 0; 
}