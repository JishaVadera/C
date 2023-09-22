#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,sum=0;
	clrscr();
	printf("enter value=");
	scanf("%d",&i);
	if(i%10)
	{
		sum=sum+i;
		printf("%d",i);
	}
	getch();
}