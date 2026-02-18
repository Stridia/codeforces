#include <stdio.h>

int main() {
    int target_growth;
    scanf("%d", &target_growth);
    if (target_growth == 0) {
        printf("0");
        return 0;
    }

    int a[101] = {0};
    for (int i = 0; i < 12; i++) {
        int growth;
        scanf("%d", &growth);
        a[growth]++;
    }

    int months = 0, current_growth = 0;
    for (int i = 100; i >= 0; i--) {
        while (a[i]) {
            current_growth += i;
            months++;
            a[i]--;

            if (current_growth >= target_growth) {
                printf("%d", months);
                return 0;
            }
        }
    };

    printf("-1");
    return 0;
}