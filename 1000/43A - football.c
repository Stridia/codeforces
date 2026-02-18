#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char team1[11], team2[11];
    int team1_score = 0, team2_score = 0;

    for (int i = 0; i < n; i++) {
        char team[11];
        scanf("%s", team);
        if (!i) {
            strcpy(team1, team);
            team1_score++;
            continue;
        } 

        if (strcmp(team, team1) == 0) {
            team1_score++;
        } else {
            strcpy(team2, team);
            team2_score++;
        }
    }

    printf("%s\n", (team1_score > team2_score) ? team1 : team2);
    return 0;
}