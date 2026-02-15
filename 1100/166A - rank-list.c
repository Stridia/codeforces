#include <stdio.h>

typedef struct team {
    int p;
    int t;
} Team;

void swap(Team *a, Team *b) {
    Team temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int top = 0;
    Team rank[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &rank[top].p, &rank[top].t);
        top++;
        if (i == 0) continue;

        int idx = top;
        while (idx--) {
            if (rank[idx].p > rank[idx-1].p || (rank[idx].p == rank[idx-1].p && rank[idx].t < rank[idx-1].t)) 
                swap(&rank[idx], &rank[idx-1]);
            else 
                break;
        }
    }

    int count = 1;
    Team x = {rank[k-1].p, rank[k-1].t};
    for (int i = k; i < n; i++) {
        if (!(rank[i].p == x.p && rank[i].t == x.t)) break;
        count++;
    }
    for (int i = k-2; i >= 0; i--) {
        if (!(rank[i].p == x.p && rank[i].t == x.t)) break;
        count++;
    }
    
    printf("%d", count);
    return 0;
}