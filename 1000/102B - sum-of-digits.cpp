#include <iostream>
#include <string>
using namespace std;

// Returns the sum of digits of a number string 
string digitSum(string a) {
    string sum = "0";
    while (!a.empty()) {
        int digit = a.back() - '0';
        a.pop_back();
        
        sum[0] += digit;
        int carry = (sum[0] - '0') / 10;
        int top = 0;
        while (carry) {
            sum[top] -= (carry * 10);
            if (sum.size() == top+1) {
                sum.push_back(carry + '0');
                break;
            } else {
                top++;
                sum[top] += carry;
                carry = (sum[top] - '0') / 10;
            }
        }
    }

    return sum;
}

int main() {
    string a;
    cin >> a;

    // Replaces string 'a' with its sum of digits until size equals to 1
    int count = 0;
    while (a.length() > 1) {
        a = digitSum(a);
        count++;
    }

    cout << count;
    return 0;
}