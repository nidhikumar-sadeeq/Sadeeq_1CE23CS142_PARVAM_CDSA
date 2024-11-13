#include <stdio.h>
#include <limits.h>

int main() {
    int a;
    printf("Enter the number of elements: ");
    scanf("%d", &a);
    
    if (a < 2) {
        printf("At least two numbers are required to find the second smallest.\n");
        return 1;
    }

    int n[a];
    
    printf("Enter %d integers:\n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &n[i]);
    }

    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for (int i = 0; i < a; i++) {
        if (n[i] < min1) {
            min2 = min1;
            min1 = n[i];
        } else if (n[i] < min2 && n[i] != min1) {
            min2 = n[i];
        }
    }

    if (min2 == INT_MAX) {
        printf("There is no second minimum value.\n");
    } else {
        printf("The second smallest element is: %d\n", min2);
    }

    return 0;
}