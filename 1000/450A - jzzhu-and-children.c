#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int child;
    int max_turn = 0, child_num = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &child);
        child = ceil((float) child /  m);
        
        // Find the child that goes back in line the most
        if (child >= max_turn) {
            max_turn = child;       // Turns represents how many times a child is going to get candies
            child_num = i+1;
        }
    }

    printf("%d\n", child_num);
    return 0;
}