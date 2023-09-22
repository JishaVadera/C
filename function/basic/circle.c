#include<stdio.h>
void con1(float radius)
{
    float area;
    area=radius*radius*3.14;
    printf("Ans = %.2f",area);
}
int main()
{
    float radius;
    printf("enter value:");
    scanf("%f",&radius);

    con1(radius);
    return 0;
}