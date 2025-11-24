#include <stdio.h>

int main() {
    int num, original, reversed = 0;
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        int digit = num % 10;             
        reversed = reversed * 10 + digit; 
        num /= 10;                        
    }

    if (original == reversed) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}
