#include<stdio.h>
void wh(int i)
{
    while (i>=1)
    {
        printf("%2d",i);
        i--;
    }
    
}
int main()
{
    int i=10;
    wh(i);
    return 0;
}