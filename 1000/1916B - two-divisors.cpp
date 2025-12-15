#include <iostream>
#include <numeric>
using namespace std;
#define ll long long

void solve() {
    ll a, b;
    cin >> a >> b;

    ll result = b;
    if (b % a == 0) result = (b * b) / a;
    else result = (a * b) / gcd(a, b);

    cout << result << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}