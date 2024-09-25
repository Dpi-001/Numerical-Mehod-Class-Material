//program to accept marks of 5 subject and find sum and average
#include<stdio.h>
int main()
{
	int i, marks[5],avg;
	int sum;
	sum=0;
	printf("enter the marks");
	for(i=0;i<5;i++)
	{
		printf("enter the marks of %d",i);
		scanf("\n%d",&marks[i]);
		
	}
	printf("the marks are entered");
    for(i=0;i<5;i++)
	{
	sum= sum+marks[i];
    }
	avg=sum/5;
	
	printf("\naverageis",avg);
	return 0;
}
