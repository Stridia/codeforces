#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;

    // Testing for every possible combination of a and b
    for (ll a = 1; a * a * a < n; a++) {
        ll cube = n - (a * a * a);
        ll b = round(cbrt(cube));
        if (b * b * b == cube) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}