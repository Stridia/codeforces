#include <stdio.h>
#include <string.h>

int main() {
    char direction;
    scanf("%c", &direction);

    getchar();
    char s[101];
    scanf("%s", s);

    char keyboard[] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < strlen(s); i++) {
        int j = 0;
        while (keyboard[j] != s[i]) j++;

        j = (direction == 'R') ? j-1 : j+1;
        s[i] = keyboard[j];
    }

    printf("%s\n", s);
    return 0;
}