#include <stdio.h>
int main(){
    int a, b, c, d, e, sum;
    float avg;
    printf("Enter 5 numbers: \n");
    scanf("%d %d %d %d %d", &a, &b, &c,&d,&e);
    sum = a + b + c + d + e;
    avg = sum / 5;
    printf("Sum = %d \n", sum);
    printf("Average = %.2f", avg);
    return 0;
}
