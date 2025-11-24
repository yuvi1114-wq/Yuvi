#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    scanf("%s", binary);

    int n = strlen(binary);

    
    for (int i = 0; i < n; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number");
            return 0;
        }
    }

    printf("%s", binary);
    return 0;
}
