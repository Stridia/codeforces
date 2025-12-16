#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Counts the number of almost prime numbers
    int count = 0;                      
    vector<int> a(n+1, 0);
    for (int i = 2; i < n+1; i++) {
        if (!a[i]) 
            for (int j = i+i; j < n+1; j+=i) a[j]++;
        else if (a[i] == 2) 
            count++;
    }

    cout << count;
    return 0;
}