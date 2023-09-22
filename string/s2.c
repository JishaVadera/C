#include<stdio.h>

int main()
{
	char str[50];
	char str1[50];
	int i,j=0,length;
	printf("enter str value:");
	scanf("%[^\n]s",&str);

	for(i=0; str[i]!='\0' ; i++)
	{
		length=i;
	}
	for(i=length; i>=0 ; i--)
	{
		str1[j]=str[i];
		j++;
		str1[j]='\0';
	}
	printf("rever str:%s",str1);
	return 0;
}