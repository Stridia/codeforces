#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int emp[n];
    for (int i = 0; i < n; i++) scanf("%d", &emp[i]);

    int groups = 1;
    for (int i = 0; i < n; i++) {
        if (emp[i] == -1) continue;
        
        int count_group = 2;
        int j = emp[i] - 1;

        while (emp[j] != -1) {
            j = emp[j] - 1;
            count_group++;
        } 

        if (count_group > groups) groups = count_group;
    }

    printf("%d", groups);
    return 0;
}