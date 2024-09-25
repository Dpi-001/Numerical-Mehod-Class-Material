#include<stdio.h>
int main()
{
	int i;
	float a[5];
	printf("enter the number");
	for(i=1;i<=5;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("entered numbers are:");
	for (i=1;i<=5;i++)
	{
		printf("\na[%d]=%f",i,a[i]);
		
	}
	return 0;
}
