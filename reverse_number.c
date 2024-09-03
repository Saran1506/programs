//program to reverse number 12345 to 54321
#include<stdio.h>

int main()
{
	int n,e,re=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		e=n%10;
		re=re*10+e;
		n=n/10;
	}
	printf("reverse a number is: %d\n",re);
	return 0;
}
