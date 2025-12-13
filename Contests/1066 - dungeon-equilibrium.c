#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n;
    scanf("%d", &n);

    // Array and counter array declaration
    int *arr = (int*)malloc(sizeof(int) * n);
    int *counter = (int*)calloc(n+1, sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", arr+i);
        counter[arr[i]]++;
    }

    // Checking each number occurences on the array
    int removed = 0;
    for (int i = 0; i < n+1; i++) {
        if (!counter[i]) continue;
        if (counter[i] > i) removed += (counter[i] - i);
        else if (counter[i] < i) removed += counter[i];
    }

    printf("%d\n", removed);
    free(arr);
    free(counter);
} 

int main() {
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}