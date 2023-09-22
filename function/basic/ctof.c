#include<stdio.h>
void con(int cel)
{
    int a;
    a =((cel*9/5)+32);
    printf("Ans = %d",a);
}
int main()
{
    int cel;
    printf("enter value:");
    scanf("%d",&cel);

    con(cel);
    return 0;
}