#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int isCorrect = 1;
    if (a.length() != b.length()) isCorrect = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[b.length()-i-1]) {
            isCorrect = 0;
            break;
        } 
    }
    
    cout << ((isCorrect) ? "YES" : "NO");
    return 0;
}