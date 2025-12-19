#include <iostream>
#include <vector>
using namespace std;
#define NDEF -1000000000

int main() {
    int n;
    cin >> n;
    
    int diff;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (!i) continue;
        else if (i == 1) diff = a[i] - a[i-1];
        
        if (a[i] - a[i-1] != diff) diff = NDEF;
    }

    cout << ((diff == NDEF) ? a[n-1] : a[n-1] + diff);

}