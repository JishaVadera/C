#include<stdio.h>
int a,b;
int large()
{
    if (a>b)
    {
        printf("a is big:%d",a);
        return a;
    }
    else
    {
         printf("b is big:%d",b);
        return b;
    }
    return large();   
}

int main()
{
    printf("enter value of a= ");
    scanf("%d",&a);

    printf("enter value of b= ");
    scanf("%d",&b);
     large();
}