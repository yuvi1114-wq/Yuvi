#include <stdio.h>

int main() {
    int num;
    long long product = 1; 
    int has_odd = 0;       

    scanf("%d", &num);
    if (num < 0) num = -num; 

    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 != 0) { 
            product *= digit;
            has_odd = 1;
        }
        num /= 10;
    }

    if (has_odd)
        printf("%lld", product);
    else
        printf("No odd digits");

    return 0;
}
