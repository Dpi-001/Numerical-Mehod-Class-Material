#include<stdio.h>
int main()
{
	int i,n,small,large,a[9];
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("a[%d]=%d",i,a[i]);
		printf("we got the elements of array");
	}
	small=a[0];
	large=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<small)
		a[i]=small;
	    if(a[i]>large)
	    a[i]=large;
	}
	return 0;
}
