
#include <stdio.h>

int main() {
    int a = 4;
    int b = 5;

    if (a == b) {
        printf("a and b are equal\n");
    } else {
        printf("a and b are not equal\n");
    }

    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("a is not greater than b\n");
    }

    if (a != b) {
        printf("a and b are not the same\n");
    } else {
        printf("a and b are the same\n");
    }

    return 0;
}
