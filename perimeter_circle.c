#include <stdio.h>  
#define PI 3.14
int main() {  
  double radius, circumference;  
printf("Enter the radius of the circle: ");  
scanf("%lf", &radius);
circumference = 2 * PI * radius; 
printf("Circumference of the circle: %.2lf\n", circumference);  
 return 0;  
}  
