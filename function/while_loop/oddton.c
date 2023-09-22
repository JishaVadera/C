#include<stdio.h>
void wh1(int i,int n)
{
    while (i<=n)
    {
        if (i%2!=0)
        {
             printf("%2d",i);
        }
        i++;
    }
    
}
int main()
{
    int i=1,n;
    printf("enter value =");
    scanf("%d",&n);
    wh1(i,n);
    return 0;
}