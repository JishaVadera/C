#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char ch='A';
	clrscr();
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("  %c  ",ch);
			ch++;

		}
	printf("\n");
	}
	getch();
}