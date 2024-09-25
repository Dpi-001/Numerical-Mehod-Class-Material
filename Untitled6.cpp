// program that accepts the price and stock pf 5 bulbs and calculate total cost
#include<stdio.h>
int main()
{
	int i;
	int stock[5];
	float price[5];
	float cost;
	cost=0;
	for(i=0;i<5;i++)
	{
		printf("enter the stock of %d:",i+1);
		
		scanf("%d",&stock[i]);
		printf("enter the price ");
		scanf("%f",&price[i]);
		cost= cost+stock[i]*price[i];
		
	}
	printf("the total cost",cost);
	return 0;
}
