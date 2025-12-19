#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> bars(n);
    for (int i = 0; i < n; i++) cin >> bars[i];

    int i = 0, j = n-1;
    int a = 0, b = 0;
    while (i <= j) {
        if (a <= b) a += bars[i++];
        else b += bars[j--];
    }

    cout << i << " " << n - j - 1;
    return 0;
}