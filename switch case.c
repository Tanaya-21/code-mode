#include<stdio.h>
int main()
{
	int food;
	char item[10];
	printf("\n 1.Pizza\n 2.Burger\n 3.Pasta\n 4.French Fries\n 5.Sandwich\n");
    printf("\nEnter your choice : ");
	scanf("%d",&food);
	switch(food)
	{
		case 1:
			printf("\nPrice - Rs 238");
			break;
		case 2:
			printf("\nPrice - Rs 130");
			break;
		case 3:
			printf("\nPrice - Rs 179");
			break;
		case 4:
			printf("\nPrice - Rs 99");
			break;
		case 5:
			printf("\npPrice - Rs 150");
			break;
		default:
			printf("\nSorry! invalid choice");
	}	
    return 0;
}
