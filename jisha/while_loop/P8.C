#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char cr='A';
	clrscr();
	i=0;
	while(i<5)
	{
		j=0;
		while(j<5)
		{
			printf("%c",cr);
			j++;
			cr++;
		}
		i++;
		printf("\n");
	}
	getch();
}
