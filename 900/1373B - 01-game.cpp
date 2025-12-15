#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int count0 = 0, count1 = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') count0++;
        else count1++;
    }

    int isLost = (!count0 || !count1 || min(count0, count1) % 2 == 0);
    cout << ((isLost) ? "NET\n" : "DA\n");
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}