#include<stdio.h>
int main()
{
	int a[10],sum=0,i;
	for(i=0;i<10;i++)
	{
		printf("enter value a[%d]: ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("total sum: %d ",sum);
	return 0;
}