#include <stdio.h>

int main() {
    int n, i = 0;
    scanf("%d", &n);

    while (i <= n) {
        printf("%d\n", 1 << i); 
        i++;
    }

    return 0;
}