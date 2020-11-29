#include<stdio.h>
int sum(int num);

int main()
{
	int num, add;
	printf("Enter the number : ");
	scanf("%d",&num);
	add = sum(num);
	printf("Addition of digits of %d = %d",num,add);
	return 0;
}

int sum(int num)
{
	if(num == 0)
	{
		return 0;
	}
	else
	{
		return((num % 10) + sum(num / 10));
	}
}
