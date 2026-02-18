#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    if (scanf("%d %d", &n, &x) != 2) return 0;

    // Find every factor of x that's less than n
    int occurences = 0;
    int root = floor(sqrt(x));
    for (int i = 1; i <= root; i++) {
        if (i * i == x && i <= n)       // If x is a square number
            occurences += 1;
        else if (x % i == 0 && i <= n && x / i <= n) 
            occurences += 2;
    }

    printf("%d\n", occurences);
    return 0;
}