#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("No\n");
        return 0;
    }

    int is_prime = 1; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            is_prime = 0;  
            break;
        }
    }

    if (is_prime) {
        printf("Yes\n");   
    } else {
        printf("No\n");    
    }

    return 0;
}