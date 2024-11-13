
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isSubsequence(char *s, char *t) {
    int i = 0, j = 0;
    int len_s = strlen(s), len_t = strlen(t);
    
    while (i < len_s && j < len_t) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }
    
    return i == len_s;
}

int main() {
    char s[100], t[100];
    scanf("%s", s);
    scanf("%s", t);
    
    if (isSubsequence(s, t)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}
