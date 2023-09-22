#include<stdio.h>
void div(int a)
{
    if(a%5==0)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
}
int main()
{
    int a;

    printf("enter value of a=");
    scanf("%d",&a);

    div(a);
    return 0;
}
