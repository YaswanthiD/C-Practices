//Find the ascii value of the characters


#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays int value
    // %c displays actual character
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}
