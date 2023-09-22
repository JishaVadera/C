#include<stdio.h>
void con(int dollar)
{
    float a;
    a=dollar*80;
    printf("dollar=%f",a);
}
int main()
{
    int dollar;
    printf("enter value:");
    scanf("%d",&dollar);

    con(dollar);
    return 0;
}