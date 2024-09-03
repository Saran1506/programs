#include<stdio.h>

int main()
{
	int n=3,a,count=1;
	while(count<=10)
	{
		a=count*n;
		printf("%d*%d=%d\n",count,n,a);
		count++;
	}
	return 0;
}
