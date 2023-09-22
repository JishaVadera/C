#include<stdio.h>
void num2(int i,int n)
{
    for ( i = 1; i<=n; i++)
    {
        printf("%3d",i);
    }
    
}
int main()
{
    int i,n;

    printf("enter value of n=");
    scanf("%d",&n);
    num2(i,n);
    return 0;
}