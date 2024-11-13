#include <stdio.h>

int lower(int n, int a[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (a[i][j] != 0) {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int a[n][n];   

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (lower(n, a)) {
        printf("The matrix is a lower triangular matrix.\n");
    } else {
        printf("The matrix is not a lower triangular matrix.\n");
    }

    return 0;
}