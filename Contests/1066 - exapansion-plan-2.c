#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    char *expand = (char*)malloc(sizeof(char) * (n+1));
    scanf("%s", expand);

    // Mirror the coordinate to the first quadrant
    if (x < 0) x = -x;
    if (y < 0) y = -y;

    // Count the number of 4's
    int fours = 0;
    for (int i = 0; i < n; i++) {
        if (expand[i] == '4') fours++;
    }

    // See if the coordinate is within the expansion or not
    int isWithin = 1;
    if (x > n || y > n) isWithin--;                 // If (x,y) is outside of n x n grid
    else if (x+y >= (2*n) - fours + 1) isWithin--;  // If (x,y) is inside but in the out-of-reach corner because of the 4's command

    printf((isWithin) ? "YES\n" : "NO\n");
    free(expand);
 }

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}