#include<stdio.h>
void con(int w, int l)
{
    int a;
    a=w*l;
    printf("Ans = %d",a);
}
int main()
{
    int w,l;
    printf("enter value of w:");
    scanf("%d",&w);

     printf("enter value of l:");
    scanf("%d",&l);
    con(w,l);
    return 0;
}