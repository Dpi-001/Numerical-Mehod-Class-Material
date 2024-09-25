
#include<stdio.h>
int main()
{
	int i;
	float a[10];
	printf("enter the 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%f",&a[i]);
		
	}
	printf("the entered number");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%f",i,a[i]);
	}
	return 0;
	
	
}
