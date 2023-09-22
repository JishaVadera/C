#include<stdio.h>
int sub()
{
    int eng,guj,sci,total;
    printf("enter eng marks: ");
    scanf("%d",&eng);

    printf("enter guj marks: ");
    scanf("%d",&guj);
        
    printf("enter sci marks: ");
    scanf("%d",&sci);

    total=guj+eng+sci;
    return total;
}
int result(int totalmarks)
{
    int per=totalmarks*100/300;

    printf("total = %d\n",totalmarks);
    printf("per = %d\n",per);

    return per;
}
int main()
{
    int gettotal = sub();
    int getper = result(gettotal);     
    return 0; 
}