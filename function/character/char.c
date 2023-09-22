#include<stdio.h>
void chr(char c)
{
    if(c>=97 && c<=122)
    {
        c=c-32;
        printf("uppercase= %c",c);
    }
    else if (c>=65 && c<=90)
    {
        c=c+32;
        printf("lowercase= %c",c);
    }
}
int main()
{
    char c;

    printf("enter value of c=");
    scanf("%c",&c);

    chr(c);
    return 0;
}
