//2, 4, 4, 8, 6, 12, 8, 16, 10, 20, 12, 24, 14, 28, 16, 32 number series
#include<stdio.h>

int main(int args,char** argv)
{
	int n,s;
	n=1;
	s=20;
	while(n<=s)
	{
		printf("%d, %d, ",n*2,n*4);
		n++;
	}
	return 0;
}
