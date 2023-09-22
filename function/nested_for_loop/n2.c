/*
  5  5  5  5  5
  4  4  4  4  4
  3  3  3  3  3
  2  2  2  2  2
  1  1  1  1  1
*/
#include<stdio.h>
void num(int i,int j)
{
    for ( i = 5; i>=1; i--)
    {
        for ( j = 5; j>=1; j--)
        {
            printf("%3d",i);
        }
        printf("\n");
    }
    
}
int main()
{
    int i,j;
    num(i,j);
    return 0;
}