#include <stdio.h>

void solve() {
    int hp, Void, Light;
    scanf("%d %d %d", &hp, &Void, &Light);

    for (int i = 0; i < Void; i++) {
        if (hp <= 20) break;
        hp = hp / 2 + 10;
    }

    if (hp - Light * 10 <= 0) printf("YES\n");
    else printf("NO\n");
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}