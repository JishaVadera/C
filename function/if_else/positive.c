#include<stdio.h>
void pos(int a)
{
    if(a>=0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
}
int main()
{
    int a;

    printf("enter value of a=");
    scanf("%d",&a);

    pos(a);
    return 0;
}
