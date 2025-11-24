#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Input format: number operator number
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result: %d", a + b);
            break;

        case '-':
            printf("Result: %d", a - b);
            break;

        case '*':
            printf("Result: %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result: %d", a / b);
            else
                printf("Error: Division by zero");
            break;

        case '%':
            if (b != 0)
                printf("Result: %d", a % b);
            else
                printf("Error: Modulo by zero");
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
