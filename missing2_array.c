// findind 2 missing number in a array
#include<stdio.h>

void main() 
{
	int x,y,c=0,i=0;
	int a[] = {6,8,9,10,11,13,14,15,16,17};
	printf("The missing number is:\n");
	while(i<9) 
	{
	 	x=a[i]+1;
		i++;
		y=a[i];
		if(x!=y)
		{
			int d=y-x;
			while(d>c)
			{
				printf("%d\n",a[i]-d);
				d--;
			}
		}
	}
}
