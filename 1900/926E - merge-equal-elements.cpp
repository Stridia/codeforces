#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Stack Input and Processing 
    vector<int> s;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        // Checks if current input == s.top
        while (!s.empty() && s.back() == input) {
            s.pop_back();
            input++;
        }
        s.push_back(input);
    }

    // Output
    cout << s.size() << endl;
    for (int i = 0; i < s.size(); i++) cout << s[i] << " ";
    return 0;
}