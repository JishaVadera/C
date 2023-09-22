/*
 2   2   2   2   2 
 4   4   4   4   4
 6   6   6   6   6
 8   8   8   8   8
 10  10  10  10  10
*/
#include<stdio.h>
void num4(int i,int j)
{
    for ( i = 1; i<=10; i++)
    {
        if (i%2==0)
        {
             for ( j = 1; j<=5; j++)
        {
            printf(" %2d ",i);
        }
        }
        printf("\n");
    }
    
}
int main()
{
    int i,j;
    num4(i,j);
    return 0;
}