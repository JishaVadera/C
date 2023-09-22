#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum=0;
	printf("enter value=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	     sum=i*i;
	     printf("%d",sum);
	}
	return 0;
}