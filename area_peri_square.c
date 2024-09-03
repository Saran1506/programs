#include<stdio.h>
int main()
{
    float side,area,perimeter;
    printf("\n Enter the Length of Side : ");
    scanf("%f",&side);
    area = side * side ;
    printf("\n Area of Square : %f",area);
    perimeter = 4 * side;
    printf("\n perimeter of square : %f\n",perimeter);
    return 0;
}
