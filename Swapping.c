#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter number n1\n");
	scanf("%d",&a);
	printf("Enter number n2\n");
	scanf("%d",&b);
	i=a;
	a=b;
	b=i;
	printf("After swapping the numbers are n1=%d ,n2=%d ",a,b);
	return 0;
}
