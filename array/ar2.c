#include<stdio.h>
int main()
{
	int a[10],odd=0,even=0,i;
	for(i=0;i<10;i++)
	{
		printf("enter value a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<10; i++)
	{
		if(a[i]%2==0)
		{
			even = even + a[i];
		}
		else
		{
			odd = odd + a[i];
		
		}
	}
	printf("\nsum of odd= %d ",odd);
	printf("\nsum of even= %d ",even);
	return 0;
}