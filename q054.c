/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main(void)
{
    int d, i, r, h, p, q;

    for (i = 0; i <= 7; i += 2)
    {
        for (d = 3; d >= (i / 2) - 3; d --)
        {
            printf(" ");
        }
        for (r = 0; r <= i; r++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (h = 4; h >= 0; h -= 2)
    {
        for (p = (h / 2) - 3; p <= 3; p ++)
        {
            printf(" ");
        }
        for (q = h; q >= 0; q--)
        {
            printf("*");
        }
        printf("\n");
    }
}
