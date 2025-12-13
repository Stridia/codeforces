#include <stdio.h>
#include <string.h>

void count(char *s, int n, int *lower, int *upper) {
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') (*lower)++;
        else (*upper)++;
    }
}

void modify(char *s, int n, int change) {
    for (int i = 0; i < n; i++) {
        if (change && s[i] >= 'a' && s[i] <= 'z') 
            s[i] = s[i] - 'a' + 'A';
        else if (!change && s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
}

int main() {
    char s[101];
    scanf("%s", s);

    int lowercase = 0, uppercase = 0;
    count(s, strlen(s), &lowercase, &uppercase);

    int change = 0;
    if (uppercase > lowercase) change++;
    modify(s, strlen(s), change);

    printf("%s", s);
    return 0;
}