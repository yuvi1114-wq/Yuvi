#include <stdio.h>

int main() {
    float num1, num2, sum, difference, product, quotient;

 
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

   
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
o
    if (num2 != 0)
        quotient = num1 / num2;
    else {
        printf("Division by zero is not allowed.\n");
        quotient = 0;
    }

    
    printf("\nSum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);

    if (num2 != 0)
        printf("Quotient = %.2f\n", quotient);

    return 0;
}
