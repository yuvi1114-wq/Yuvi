/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main(void)
{
    int i, r, h, q;

    for (i = 0; i <= 5; i += 2)
    {
        for (r = 0; r <= i; r++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    for (h = 2; h >= 0; h -= 2)
    {
        for (q = h; q >= 0; q--)
        {
            printf("*\n");
        }
        printf("\n");
    }
}
