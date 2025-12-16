#include <iostream>
#include <string>
using namespace std;

int remove_amount(string s, char first, char second) {
    int steps = 0, i = s.length()-1;

    // Searches for the last digit
    while(i >= 0 && s[i] != second) {
        i--; steps++;
    }
    if (i < 0) return 1e9;

    // Searches for the second to last digit
    i--;
    while ((i >= 0) && s[i] != first) {
        i--; steps++;
    }
    if (i < 0) return 1e9;

    return steps;
}

void solve() {
    string s;
    cin >> s;

    int count = s.length();
    count = min(count, remove_amount(s, '0', '0'));
    count = min(count, remove_amount(s, '2', '5'));
    count = min(count, remove_amount(s, '5', '0'));
    count = min(count, remove_amount(s, '7', '5'));
    cout << count << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}