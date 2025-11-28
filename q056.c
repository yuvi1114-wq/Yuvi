// Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>

int main(void)
{
    int s, i, r;
    scanf("%i", &s);
    int arr[s];

    {
        for (i = 0; i < s; i++)
        {
            scanf(" %i", &arr[i]);
        }
        for (r = 0; r < s; r++)
        {
            printf("%i ", arr[r]);
        }
        printf("\n"); 
    }
}
