#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    // Count number of appearances of each letter
    int count[27] = {0};
    for (int i = 0; i < n; i++) count[s[i] - 'a']++;

    // Determines whether it is possible to form a palindrome or not
    int oddCount = 0;
    for (int i = 0; i < 27; i++) {
        if (count[i] % 2) oddCount++;
    }
    
    cout << ((oddCount <= k+1) ? "YES" : "NO") << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}