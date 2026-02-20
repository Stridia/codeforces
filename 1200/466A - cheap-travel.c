#include <stdio.h>

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    int min_cost = 0;
    if (b < m * a) {        // If special tickets are cheaper than one-rides 
        min_cost = (n / m) * b;
        n %= m;

        if (b < n * a)      // If special tickets are still cheaper for the remaining rides
            min_cost += b;
        else
            min_cost += (n * a);
    } else {
        min_cost = n * a;
    }

    printf("%d\n", min_cost);
    return 0;
}