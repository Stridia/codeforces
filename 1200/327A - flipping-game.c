#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Input phase + count original 1's
    int a[n], originalOnes = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i]) originalOnes++;
    }

    // Find the max 1's you can get when flipping the value 
    int maxCount = -1, currCount = 0;
    for (int i = 0; i < n; i++) {
        currCount += (a[i] == 0) ? 1 : -1; 

        if (maxCount < currCount) 
            maxCount = currCount;

        if (currCount < 0) 
            currCount = 0;
    }

    printf("%d", maxCount + originalOnes);
    return 0;
}