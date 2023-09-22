#include<stdio.h>
void wh(int i)
{
    while (i<=90)
    {
        printf(" %c=%d",i,i);
        i++;
    }
    
}
int main()
{
    int i=65;
    wh(i);
    return 0;
}