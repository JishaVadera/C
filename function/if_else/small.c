#include<stdio.h>
void small(int a,int b)
{
    if (a<b)
    {
        printf("A is small");
    }
    
}
int main()
{
    int a,b;

    printf("enter value of a=");
    scanf("%d",&a);

    printf("enter value of b=");
    scanf("%d",&b);

    small(a,b);
    return 0;
}
