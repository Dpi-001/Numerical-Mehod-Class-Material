#include<stdio.h>
int main()
{
	int i;
	int marks[4],sum;
	float avg;
	sum=0;
	printf("enter the marks:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&marks[i]);
		
	}
	for(i=0;i<4;i++)
	{
		sum=sum+marks[i];
		
	
	}
	avg=float(sum)/5.0;
	printf("averageis%f:",avg);
	return 0;
}
