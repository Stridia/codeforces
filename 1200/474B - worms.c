#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);

    int pile[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &pile[i]);
        if (i) pile[i] += pile[i-1];
    }

    scanf("%d", &m);
    int worm[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &worm[i]);

        // Binary Search Algorithm
        int top = n-1, bottom = 0;
        while (top > bottom) {
            int middle = (top + bottom) / 2;
            int high_thres = pile[middle];
            int low_thres = (high_thres) ? pile[middle-1] : 0;

            if (worm[i] > low_thres && worm[i] <= high_thres) 
                top = bottom = middle;
            else if (worm[i] <= low_thres)
                top = middle;
            else if (worm[i] > high_thres) 
                bottom = middle+1;
        }
        worm[i] = top+1;
    }

    for (int i = 0; i < m; i++) 
        printf("%d\n", worm[i]);
    return 0;
}