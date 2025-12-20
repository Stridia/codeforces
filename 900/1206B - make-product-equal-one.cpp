#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minusCount = 0, hasZero = 0;
    long long cost = 0;
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        if (a > 0) {
            cost += (a - 1); 
        } else if (a < 0) {
            cost += -(a + 1);
            minusCount++;
        } else { 
            cost++;
            hasZero = 1;
        }
            
    }

    if (minusCount % 2 && !hasZero) cost += 2;
    cout << cost;
    return 0;
}