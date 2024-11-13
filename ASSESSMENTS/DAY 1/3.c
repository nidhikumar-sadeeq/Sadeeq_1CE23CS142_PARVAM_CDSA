
#include <stdio.h>

int main() {
    unsigned int hex_value;
    
    scanf("%x", &hex_value);
    
    printf("%5u\n", hex_value);
    printf("%5o\n", hex_value);
    printf("%5X\n", hex_value);
    
    return 0;
}
