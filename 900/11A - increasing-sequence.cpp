#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    // Counts the mininum number of additions to make the sequence increasing
    int count = 0;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (!i) continue;
        if (a[i] <= a[i-1]) {
            int move = (a[i-1] - a[i]) / d + 1;
            a[i] += (d * move);
            count += move;
        }
    }

    cout << count;
    return 0;
}