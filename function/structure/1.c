#include<stdio.h>
struct bill
{
    int rate,qty,dis5,billamt,gst,netbill,amt;
    char pro_name[15];
};
int main()
{
    struct bill b[4];
    int i;
    for ( i = 0; i <4; i++)
    {
        printf("\nenter value of pro_name: ");
        scanf("%s",&b[i].pro_name);

        printf("enter value of rate: ");
        scanf("%d",&b[i].rate);

        printf("enter value of qty: ");
        scanf("%d",&b[i].qty);
    }
    printf("pro_name\t\trate\t\tqty\tamt\tdis5\tbill\tgst\tnet");
    for ( i = 0; i < 4; i++)
    {
        int amt=10000;
        b[i].dis5=b[i].amt*5/100;//find discount
        b[i].billamt=b[i].amt-(b[i].amt*5/100);//find bill amount
        b[i].gst=b[i].amt*18/100;//find gst bill
        b[i].netbill=b[i].amt-b[i].gst;//find netbill
        printf("%s\t\t%d\t\t%d\t%d\t%d\t%d\t%d\t%d\n",b[i].pro_name,b[i].rate,b[i].qty,b[i].amt,b[i].dis5,b[i].billamt,b[i].gst, b[i].netbill);
    }
    
    
}
