#include <stdio.h>

int hcf(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int h = hcf(a, b);
    int lcm = (a * b) / h;

    printf("%d", lcm);

    return 0;
}
