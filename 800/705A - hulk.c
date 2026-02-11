#include <stdio.h>
#include <string.h>

int main() {
    char s[2000];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i) 
            strcat(s, "that ");        
        if (i % 2 == 0)
            strcat(s, "I hate ");
        else 
            strcat(s, "I love ");
    }
    strcat(s, "it");
    
    printf("%s", s);
    return 0;
}