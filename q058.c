// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>

int main(void)
{
    int s, i, r, max, min;
    scanf("%i", &s);
    int arr[s];

    {
        for (i = 0; i < s; i++)
        {
            scanf(" %i", &arr[i]);
        }
        max = arr[0];
        min = arr[0];
        for (r = 0; r < s; r++)
        {
            if (arr[r] > max)
            {
                max = arr[r];
            }
            if (arr[r] < min)
            {
                min = arr[r];
            }
        }
        printf("Max=%i, Min=%i\n", max, min);
    }
}
