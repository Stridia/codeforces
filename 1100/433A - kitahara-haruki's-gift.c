#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int one_hundred = 0, two_hundred = 0;
    for (int i = 0; i < n; i++) {
        int apple;
        scanf("%d", &apple);

        if (apple == 100) one_hundred++;
        else two_hundred++;
    }
    
    two_hundred %= 2;
    if (two_hundred == 1) one_hundred -= 2;
    
    if (one_hundred < 0) {
        printf("NO\n");
        return 0;
    }

    one_hundred %= 2;
    if (one_hundred == 0) printf("YES\n");
    else printf("NO\n");
    return 0;
}