#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        if (s.length() > 10) cout << s.front() << s.length()-2 << s.back() << endl;
        else cout << s << endl;
    }
    return 0;
}