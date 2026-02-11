#include <stdio.h>

int main() {
    int horseshoe[4];
    for (int i = 0; i < 4; i++) 
        scanf("%d", &horseshoe[i]);

    int duplicates = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 4; j++) {
            if (horseshoe[i] == horseshoe[j]) {
                duplicates++;
                break;
            }
        }
    }

    printf("%d", duplicates);
    return 0;
}