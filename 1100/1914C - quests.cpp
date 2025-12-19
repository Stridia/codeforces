#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i) a[i] += a[i-1];              // Adds a[i] with a[0], a[1], .., a[i-1]     
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (i) b[i] = max(b[i], b[i-1]);    // Replaces b[i] with the current max value of b
    }

    // Compares each pair of a[i] and b[i]
    int exp = a[0] + b[0] * (k-1);
    for (int i = 1; i < min(k, n); i++) {
        exp = max(exp, a[i] + b[i] * (k-i-1));
    }

    cout << exp << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0; 
}
