#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        char s[3];
        scanf("%s", s);
        for (int i = s[1]+1; i <= '8'; i++) printf("%c%c\n", s[0], i); // Atas
        for (int i = s[1]-1; i >= '1'; i--) printf("%c%c\n", s[0], i); // Bawah
        for (int i = s[0]+1; i <= 'h'; i++) printf("%c%c\n", i, s[1]); // Kanan
        for (int i = s[0]-1; i >= 'a'; i--) printf("%c%c\n", i, s[1]); // Bawah
    }
    return 0;
}