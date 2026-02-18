#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);

    getchar();
    char s[n+1];
    scanf("%s", s);

    int consecutive = 1, max_consecutive = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1])
            consecutive++;
        else 
            consecutive = 1;

        if (consecutive > max_consecutive) 
            max_consecutive = consecutive;
    }
    
    printf("%d\n", 1 + max_consecutive);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}