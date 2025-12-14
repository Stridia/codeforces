#include <iostream>
using namespace std;
#define MAX 200000000

int operation(int a, int b, int count) {
    if (a == 0) return 0;
    if (b > a) return 1;
    int divide = (b > 1) ? operation (a/b, b, count) : MAX;
    int add = operation(a, b+1, count);
    return 1 + min(divide, add);
}

void solve() {
    int a, b;
    cin >> a >> b;
    cout << operation(a, b, 0) << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}