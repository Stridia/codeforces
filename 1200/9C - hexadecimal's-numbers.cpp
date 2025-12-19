#include <iostream>
#include <cmath>
using namespace std;

int add(int n) {
    int i = 0;
    int digit = (++n) % 10;
    while (digit == 2) {
        n = n - 2 * pow(10, i++) + pow(10, i);
        digit = (n / (int) pow(10, i)) % 10;
    }
    return n;
}

int main() {
    int n;
    cin >> n;
    
    int i = 0;
    int count = 0;
    while ((i = add(i)) <= n) count++;

    cout << count;
    return 0;
}