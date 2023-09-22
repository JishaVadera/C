#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	while(i<=10)
	{
		if(i%2!=0)
		{
		j=1;
		while(j<=5)
		{
			printf("%3d",i);
			j++;
		}
		}
		i++;
		printf("\n");
	}
	 getch();
}