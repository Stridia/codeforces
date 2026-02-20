#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);

    getchar();
    char s[n+1];
    scanf("%s", s);

    int b_count = 0;
    for (int i = 0; i < n; i++) 
        if (s[i] == 'B') b_count++;
    
    // Conditions when Bob wins
    int con1 = (s[n-1] == 'B' && b_count >= 2); // BAAAAB, ABAAAB, AABAAB, AAABAB, AAAABB
    int con2 = (s[0] == 'B' && s[n-2] == 'B');  // BAAABA, BAABA, BABA, BBA, BA

    printf((con1 || con2) ? "Bob\n" : "Alice\n");
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}