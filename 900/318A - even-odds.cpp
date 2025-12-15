#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    
    long long mid = (n % 2) ? (n / 2) + 1 : (n / 2);
    int isEven = (k > mid) ? 1 : 0;

    cout << ((isEven) ? 2 * (k-mid) : 2 * k - 1);
    return 0;
}