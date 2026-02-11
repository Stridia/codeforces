#include <stdio.h>

int main() {
    int s, n;
    scanf("%d %d", &s, &n);
    
    int dragons[1001] = {0};         // Index represents strength, value represents bonus
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // If dragon has bonus, then count normally. Otherwise, store dragon's strength in index 0
        if (y) dragons[x] += y;
        else dragons[0] = (x > dragons[0]) ? x : dragons[0];    
    }

    // Try to beat every dragon that has a bonus
    int isDefeated = 0;
    for (int i = 1; i <= 1000; i++) {
        if (dragons[i]) {
            if (s > i) {
                s += dragons[i];
            } else {
                isDefeated = 1;
                break;
            }
        }
    }

    // Try to beat the hardest dragon without a bonus
    if (dragons[0] >= s) isDefeated = 1;

    if (isDefeated) printf("NO");
    else printf("YES");
    return 0;
}