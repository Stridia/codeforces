#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    long long num, sum = 0, temp = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &num);
        if (!i) {
            temp = num;
            continue;
        }

        if (num * temp >  0) {
            temp = (num > temp) ? num : temp;
        } else {
            sum += temp;
            temp = num;
        }
    }
    printf("%lld\n", sum + temp);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}