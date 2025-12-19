#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int index = -1, max = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (index != -1) continue;  
        if (a[i] > max) index = i+1;
        else if (a[i] == max) max++;
    }

    cout << index;
    return 0;
}