#include<stdio.h>

int main()
{
	int i=3,n,t1=0,t2=1,t3=t1+t2;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("Fibonacci series:%d, %d, ",t1 ,t2);
	while(i<=n)
	{
		printf("%d, ",t3);
		t1 = t2;
		t2 = t3;
		t3 = t1 + t2;
		i++;
	}
	return 0;
}

