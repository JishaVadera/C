#include<stdio.h>
int a,b;
int small()
{
    if (a<b)
    {
        printf("a is small:%d",a);
        return a;
    }
    else
    {
        printf("b is small");
        return b;
    }
    return small();   
}

int main()
{
    printf("enter value of a= ");
    scanf("%d",&a);

    printf("enter value of b= ");
    scanf("%d",&b);
    small();
}