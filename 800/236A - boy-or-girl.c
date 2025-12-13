#include <stdio.h>
#include <string.h>

int main() {
    int distinct[26] = {0};
    char name[101];
    scanf("%s", name);
    
    for (int i = 0; i < strlen(name); i++) {
        int huruf = name[i] - 'a';
        if (!distinct[huruf]) distinct[huruf]++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) count += distinct[i];

    if (count % 2 == 0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    return 0;
}