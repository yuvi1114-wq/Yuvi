// this program calculate the area oand perimeter of rectangle
#include <stdio.h>
int main()
{
    float length,wedth,perimeter,area;

    //taking input
    printf("enter the length of rectangle\n");
    scanf("%f",&length);

    printf("\nEnter the wedth of rectangle\n");
    scanf("%f",&wedth);

    //now calculate the area
    
    
    area = length * wedth;
    perimeter = 2 * (length + wedth);

    //Display the result
    
    
    printf("the area of rectangle with length = %.2f and wedth = %.2f is : %.2f\n",length , wedth , area);
    
    printf("the area of rectangle with length = %.2f and wedth = %.2f is : %.2f\n",length , wedth , perimeter);
    return 0;

}
