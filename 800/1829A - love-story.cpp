#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s, c = "codeforces";
    cin >> s;

    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (c[i] != s[i]) count++;
    }

    cout << count << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}