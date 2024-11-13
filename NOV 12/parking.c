#include <stdio.h>

int main() {
    int r;
    scanf("%d", &r);
    int c;
    scanf("%d", &c);
    int p[r][c];

    // Read the matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &p[i][j]);  // Corrected: added '&' to read into the array
        }
    }

    int max = 0;
    int index = -1;

    // Find the row with the maximum number of 1's
    for (int i = 0; i < r; i++) {
        int co = 0;
        for (int j = 0; j < c; j++) {
            if (p[i][j] == 1) {
                co++;
            }
        }
        if (co > max) {
            max = co;
            index = i;  // Store the index of the row with the most 1's
        }
    }

    // Output the 1-based index of the row with the most 1's
    printf("%d\n", index + 1);  // Added newline for better output formatting
    return 0;
}