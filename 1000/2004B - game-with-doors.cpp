#include <iostream>
using namespace std;

void solve() {
    int l, r, L, R;             // Person A = [l, r]
    cin >> l >> r >> L >> R;    // Person B = [L, R]

    // Swaps if [l, r] tends to be more to the left of [L, R]
    if (l > L) {
        swap(l, L);
        swap(r, R);
    }

    // Calculates how many doors should be locked
    int result;
    if (r < L) {                    // If A's segment is strictly different than B's segment
        result = 1;
    } else {                        // If A's segment slices B's segment
        int start_i = max(l, L);
        int end_i = min(r, R);
        result = end_i - start_i;   // Calculates the start and end of intersection between A and B
        if (l < start_i) result++; 
        if (max(r, R) > end_i) result++;
    }
    cout << result << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}