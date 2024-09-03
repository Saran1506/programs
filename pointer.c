#include<stdio.h>
int main()
{
	int a;
	int *pa;
	pa = &a;
	printf("Enter the a value :");
	scanf("%d\n",&a);
	printf("The value of a is    : %d\n",a);
	printf("The value at pa is   : %d\n",*pa);
	printf("The address of a is  : %p\n",&a);
	printf("The value of pa is   : %p\n",pa);
	printf("The address of pa is : %p\n",&pa);

	return 0;
}
