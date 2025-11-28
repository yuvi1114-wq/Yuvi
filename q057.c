// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>

int main(void)
{
    int s, i, r, sum = 0;
    scanf("%i", &s);
    int arr[s];

    {
        for (i = 0; i < s; i++)
        {
            scanf(" %i", &arr[i]);
        }
        for (r = 0; r < s; r++)
        {
            sum += arr[r];
        }
        printf("%i\n", sum);
    }
}
