// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>

int main(void)
{
    int s, i, r, pos = 0, neg = 0, zero = 0;
    scanf("%i", &s);
    int arr[s];

    {
        for (i = 0; i < s; i++)
        {
            scanf(" %i", &arr[i]);
        }
        for (r = 0; r < s; r++)
        {
            if (arr[r] > 0)
            {
                pos += 1;
            }
            else if (arr[r] < 0)
            {
                neg += 1;
            }
            else
            {
                zero += 1;
            }
        }
        printf("Positive=%i, Negative=%i, Zero=%i\n", pos, neg, zero);
    }
}
