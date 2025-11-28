/*
Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter end range: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int Y = 1;
        for (int r = 2; r <= i / 2 ; r++)
        {
            if (i % r == 0)
            {
                Y = 0;
                break;
            }
        }
        if (Y != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

