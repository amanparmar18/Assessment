#include <stdio.h>
int main ()

{
	
	int choice,quantity,amount,sum=0;
	char C;
	up:
	printf("-----------Menu-----------");
	printf("\n 1.Pizza		Price = 180rs/Pcs");
	printf("\n 2.Burger		Price = 100rs/Pcs");
	printf("\n 3.Dosa		Price = 120rs/Pcs");
	printf("\n 4.Idli		Price = 50rs/Pcs");
	
	printf ("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("\nYou have selected Pizza");
		printf("\nChoose quantity = ");
		scanf("%d", &quantity);
		amount = 180*quantity;
		printf("\nAmount = %d",amount);
		sum = sum + amount;
		printf("\nTotal amount is = %d",sum);
		break;
		
		case 2:
		printf("\nYou have selected Burger");
		printf("\nChoose quantity = ");
		scanf("%d", &quantity);
		amount = 100*quantity;
		printf("\nAmount = %d",amount);
		sum = sum + amount;
		printf("\nTotal amount is = %d",sum);
		break;
		
		case 3:
		printf("\nYou have selected Dosa");
		printf("\nChoose quantity = ");
		scanf("%d", &quantity);
		amount = 120*quantity;
		printf("\nAmount = %d",amount);
		sum = sum + amount;
		printf("\nTotal amount is = %d",sum);
		break;
		
		case 4:
		printf("\nYou have selected Idli");
		printf("\nChoose quantity = ");
		scanf("%d", &quantity);
		amount = 50*quantity;
		printf("\nAmount = %d",amount);
		sum = sum + amount;
		printf("\nTotal amount is = %d",sum);
		break;	
			
			
	}
	printf("\nDo you want to place more orders? ");
	scanf(" %c",&C);
	if(C=='Y' ||C=='y')
	{
		goto up;
	}
	else
	{
		printf("\nThank you for using Aman's Cafe!!!");
	}
	return 0;
}
