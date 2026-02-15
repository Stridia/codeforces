#include <stdio.h>

int main() {
    int n, b, d;
    scanf("%d %d %d", &n, &b, &d);

    int orange[n];
    int total = 0, empty_waste = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &orange[i]);
        if (orange[i] > b) continue;

        total += orange[i];
        if (total > d) {
            total = 0;
            empty_waste++;
        }
    }
    
    printf("%d\n", empty_waste);
    return 0;
}