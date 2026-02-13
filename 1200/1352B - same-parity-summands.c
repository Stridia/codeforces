#include <stdio.h>

void solve() {
    int n, k;
    scanf("%d %d", &n, &k);

    int isEven = (n + k) % 2;
    int smallest_num = (isEven) ? 2 : 1; 

    // If (target value is smaller than min value) or (target value is odd and total value count is even), then print NO 
    if ((n < smallest_num * k) || (isEven && n % 2 == 1)) {
        printf("NO\n");
    } else {
        printf("YES\n");
        for (int i = 0; i < k; i++) {
            int num = (i > 0) ? smallest_num : n - smallest_num * (k-1);
            printf("%d ", num);
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}