#include <stdio.h>

void toggle_light(int *light, int toggle) {
    if (toggle % 2 == 1) *light = 1 - *light; 
}

int main() {
    int toggles[9];
    for (int i = 0; i < 9; i++) scanf("%d", &toggles[i]);

    int light[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int toggle_count = toggles[i*3 + j];
            toggle_light(&light[i][j], toggle_count);

            if (i > 0) toggle_light(&light[i-1][j], toggle_count);
            if (i < 2) toggle_light(&light[i+1][j], toggle_count);
            if (j > 0) toggle_light(&light[i][j-1], toggle_count);
            if (j < 2) toggle_light(&light[i][j+1], toggle_count);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d", light[i][j]);
        printf("\n");
    }
    return 0;
}