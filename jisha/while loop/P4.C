#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=65;
	while(i<=69)
	{
		j=65;
		while(j<=69)
		{
			printf("%c",i);
			j++;
		}
		i++;
		printf("\n");
	}
	 getch();
}