#include<stdio.h>
void pri(int i,int n)
{
    for ( i = -n; i<=n; i++)
    {
        printf("%3d",i);
    }
    
}
int main()
{
    int i,n;

    printf("enter value of n=");
    scanf("%d",&n);
    pri(i,n);
    return 0;
}