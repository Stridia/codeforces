#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);

    int isLower = (s[0] >= 'a' && s[0] <= 'z');
    if (isLower) s[0] = s[0] - 'a' + 'A';

    printf("%s", s);
    return 0;
}