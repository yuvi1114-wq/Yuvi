#include <stdio.h>

int main() {
    int n;
    long long factorial = 1; // Use long long for large factorials

    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("%lld", factorial);
    }

    return 0;
}
