#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("enter value=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("%d\n",i);
	}
	getch();
}