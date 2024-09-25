#include<stdio.h>
int main()
{
	int i;
	int sum;
	int marks[2];
	float avg;
	sum=0;
	for(i=0;i<2;i++)
	{
		printf("enter the marks %d",i+1);
		scanf("%d",&marks[i]);
		
	}
	for(i=0;i<2;i++)
	{
		sum=sum+marks[i];
		
	}
	avg=sum/5.0;
	printf("average",avg);
	return 0;
	
}
