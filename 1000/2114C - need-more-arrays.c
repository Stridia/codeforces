#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n;
    scanf("%d", &n);

    int numOfArrays = 0;
    int prev = -1, curr = 0;
    while (n--) {
        scanf("%d", &curr);
        if (curr > prev+1) {
            numOfArrays++;
            prev = curr;
        }
    }
    
    printf("%d\n", numOfArrays);
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) solve();
    return 0;
}