
#include <stdio.h>

int main() {
    
    float float_number;
    
    
    printf("Enter a floating-point number: ");
    scanf("%f", &float_number);

    
    int int_number = (int) float_number;

    
    printf("%.2f\n", float_number);


    printf("%d\n", int_number);

    return 0;
}
