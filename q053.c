/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main(void)
{
    int i, r, h, q;

    for (i = 0; i <= 9; i += 2)
    {
        for (r = 0; r <= i; r++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (h = 6; h >= 0; h -= 2)
    {
        for (q = h; q >= 0; q--)
        {
            printf("*");
        }
        printf("\n");
    }
}
