#include <iostream>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;

    int a[n], time = 0;
    for (int i = 0; i < d; i++) {
        cin >> a[i];
        if (!i)
            time = a[i];
        else 
            time = max(time, (a[i] - a[i-1]) / 2 + 1);
        if (i == d-1) 
            time = max(time, n - a[i] + 1);
    } 
    
    cout << time << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}