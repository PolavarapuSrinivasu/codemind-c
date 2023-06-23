#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=a+b;
    int Difference=a-b;
    int Product=a*b;
    int Quotient=a/b;
    int Remainder=a%b;
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d",sum,Difference,Product,Quotient,Remainder);
}