#include<stdio.h>
void sub(int per)
{
    if(per>75)
    {
        printf("Grade A\n");
    }
    else if(per>=60)
    {
        printf("Grade B\n");
    }
    else if(per>=45)
    {
        printf("Grade C\n");
    }
    else if (per>=35)
    {
        printf("Grade D\n");
    }
    else if (per<35)
    {
        printf("fail\n");
    }
}
int main()
{
    int eng,maths,guj,total,per;

    printf("enter value of eng=");
    scanf("%d",&eng);

    printf("enter value of maths=");
    scanf("%d",&maths);

    printf("enter value of guj=");
    scanf("%d",&guj);

    total=eng+maths+guj;

    printf("total marks= %d\n",total);

    per=total*100/300;

    printf("\nper = %d",per);
    sub(per);
    return 0;
}
