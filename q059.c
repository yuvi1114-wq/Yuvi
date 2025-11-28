// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>

int main(void)
{
    int s, i, r, odd = 0, even = 0;
    scanf("%i", &s);
    int arr[s];

    {
        for (i = 0; i < s; i++)
        {
            scanf(" %i", &arr[i]);
        }
        for (r = 0; r < s; r++)
        {
            if (arr[r] % 2 == 0)
            {
                even += 1;
            }
            else
            {
                odd += 1;
            }
        }
        printf("Even=%i, Odd=%i\n", even, odd);
    }
}
