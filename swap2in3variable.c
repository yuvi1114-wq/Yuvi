#include <stdio.h>

int main() {
    int a, b, temp;


    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

   
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
