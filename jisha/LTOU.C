#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("enter value of alphabet");
	scanf("%c",&c);
	if(c>=97 && c<=122)
	{
	c=c-32;
	printf("\nThe uppercase of enter character is:%c",c);
	}
	else if(c>=65 && c<=90)
	{
	c=c+32;
	printf("\nThe lowercase of enter character is:%c",c);
	}
getch();
}