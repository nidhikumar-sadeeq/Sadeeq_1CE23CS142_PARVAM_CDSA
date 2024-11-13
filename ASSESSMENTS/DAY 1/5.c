
#include <stdio.h>

int main() {
    char ch;
    char str[100], sentence[100];
    
    scanf("%c", &ch);
    scanf("%s", str);
    getchar();  // To clear the newline character from the input buffer
    scanf("%[^\n]%*c", sentence);
    
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);
    
    return 0;
}
