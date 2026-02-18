#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int id = 0;
    const char *hello = "hello";
    for (int i = 0; i < strlen(s); i++) 
        if (hello[id] == s[i]) id++;

    printf((id == 5) ? "YES\n" : "NO\n");
    return 0;
}