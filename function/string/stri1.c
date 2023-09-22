#include<stdio.h>
void sri(char str[10],int i,int length)
{
    for ( int i = 0; str[i]!=0; i++)
    {
        printf("total length is = %d",i);
        length=i;
    }
    
}
int main()
{
    char str[10];
    int i;

    printf("enter string = ");
    scanf("%s",&str);

    sri(str,i);
    return 0;
}