#include<stdio.h>
void cor(int x,int y)
{
    if((x>0)&&(y>0))
    {
        printf("co=ordinate-1");
    }
    if((x>0)&&(y<0))
    {
        printf("co=ordinate-2");
    }
    if((x<0)&&(y<0))
    {
        printf("co=ordinate-3");
    }
    if((x>0)&&(y<0))
    {
        printf("co=ordinate-4");
    }
}
int main()
{
    int x,y;

    printf("enter value of x=");
    scanf("%d",&x);

    printf("enter value of y=");
    scanf("%d",&y);
    cor(x,y);
    return 0;
}
