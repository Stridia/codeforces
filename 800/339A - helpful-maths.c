#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void sort(char *s, int n) {
    int sorted = 0;
    while (!sorted) {
        int swapped = 0;
        for (int i = 0; i < n; i += 2) {
            if (i && s[i] < s[i-2]) {
                swap(&s[i], &s[i-2]);
                swapped++; 
            }
        }
        if (!swapped) sorted++;
    }
}

int main() {
    char s[101];
    scanf("%s", s);
    sort(s, strlen(s));
    printf("%s", s);
    return 0;
}