#include <stdio.h>

int main() {
    int n;
    long long product = 1;  // Use long long for large products
    scanf("%d", &n);

    int has_even = 0; // To check if there is any even number

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        has_even = 1;
    }

    if (has_even)
        printf("%lld", product);
    else
        printf("No even numbers in range");

    return 0;
}
