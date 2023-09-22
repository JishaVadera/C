#include<stdio.h>
void con(int feet)
{
    int a;
    a=feet*80;
    printf("and = %d",a);
}
int main()
{
    int feet;
    printf("enter value:");
    scanf("%d",&feet);

    con(feet);
    return 0;
}