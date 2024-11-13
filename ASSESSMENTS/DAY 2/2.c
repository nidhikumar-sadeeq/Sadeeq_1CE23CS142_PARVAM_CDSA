
#include <stdio.h>

int main() {
    int units;
    scanf("%d", &units);
    int bill = 0;
    
    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 8;
    } else {
        bill = 100 * 5 + 100 * 8 + (units - 200) * 10;
    }
    
    printf("%d\n", bill);
    return 0;
}
