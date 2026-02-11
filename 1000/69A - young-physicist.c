#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++) {
        int tempx, tempy, tempz;
        scanf("%d %d %d", &tempx, &tempy, &tempz);
        x += tempx;
        y += tempy;
        z += tempz;
    }

    if (!x && !y && !z)     // Every coordinate is equal to zero
        printf("YES");
    else
        printf("NO");
    return 0;
}