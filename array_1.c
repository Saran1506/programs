// pointer using a array to print array elements by using scanf
#include<stdio.h>

int main(int argc,char*argv[])
{
	int arr[6],i=0;
	int *parr=NULL;
	parr=arr;
	printf("Enter the array 6 elements :\n");
	while(i<6)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	printf("The value of array element is :\n");
	while(parr<=&arr[5])
	{
		printf("%d\n",*parr);
		parr++;	
	}
	return 0;
}
