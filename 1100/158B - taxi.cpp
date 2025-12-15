#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    while (n--) {
        int a;
        cin >> a;
        if      (a == 1) count1++;
        else if (a == 2) count2++; 
        else if (a == 3) count3++; 
        else if (a == 4) count4++; 
    }

    int result = count4 + (count2 / 2) + min(count3, count1);   // 4's use 1 taxi per group
    if (count2 % 2) result++;                                   // 2's are paired with other 2's in a taxi
                                                                // 3's are paired with 1's in a taxi
    if (min(count3, count1) == count1) {    // If 3's remain
        count3 -= count1;
        result += count3;
    } else {                                // If 1's remain
        count1 -= count3;
        if (count2 % 2) count1 -= 2;
        result += count1 / 4;
        if (count1 % 4 > 0) result++;
    }

    cout << result;
    return 0;
}