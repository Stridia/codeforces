#include <iostream>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    ll total = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        if (x > 0) {
            total += x;
        } else if (x < 0) {
            total -= min(total, abs(x));
        }
    }

    cout << total << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}