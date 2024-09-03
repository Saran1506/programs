#include <stdio.h>
int main()
{
    int s1,s2,s3,s4,s5; 
    float per; 
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    per = (s1+s2+s3+s4+s5)/5;
    printf("Percentage = %.2f\n", per);
    if(per >= 80)
    {
        printf("Grade A");
    }
    else if(per >= 60)
    {
        printf("Grade B");
    }
    else if(per >= 40)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade F");
    }
    else
    {
	    printf("Grade G");
    }
    return 0;
} 

