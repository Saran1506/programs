#include<stdio.h>

int main(int args, char* argv[])
{
	int n,n1,n2;
	n1=11;
	n2=80;
	while(n1<n2)
	{
		if(n1%2==0)
		{
			n1=n1+2;
			printf("%d\n",n1);
		}
		else
		{
			n1=n1+1;
			printf("%d\n",n1);
			n1=n1+1;

		}
	}
	return 0;
}
