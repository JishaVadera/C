#include<stdio.h>
void num(int i)
{
    for ( i = 10; i>=1; i--)
    {
        printf("%3d",i);
    }
    
}
int main()
{
    int i;

    num(i);
    return 0;
}