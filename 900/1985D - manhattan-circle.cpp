#include <iostream>
using namespace std;

typedef struct point {
    int row;
    int col;
} Point;

void solve() {
    int n, m;
    cin >> n >> m;

    // Grid input + determining the circle's diameter and center point based on longest '#' line
    char grid[n][m];
    int diameter = 0;
    Point center = {0, 0};
    for (int i = 0; i < n; i++) {
        int tempDiameter = 0;
        Point temp;
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '#') {
                tempDiameter++;
                temp = {i+1, j+1};         // 0-indexing -> 1-indexing
            }
        }
        if (tempDiameter > diameter) {
            diameter = tempDiameter;
            center = {temp.row, temp.col - (diameter / 2)};
        }
    }

    cout << center.row << " " << center.col << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}