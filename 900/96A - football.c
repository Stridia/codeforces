#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int count = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (!i || s[i] == s[i-1]) count++;
        else count = 1;
        if (count == 7) break;
    }

    printf((count == 7) ? "YES" : "NO");
    return 0;
}