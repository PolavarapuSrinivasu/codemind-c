#include<stdio.h>
int count(long int n)
{
    int c=0;
    int r;
    while(n!=0)
    {
        r=n%10;
        c=c+1;
        n=n/10;
    }
    if(r!=0 && c==10)
    {
        return c;
    }
    else
    {
        return c-2;
    }
}
int main()
{
    long int n;
    scanf("%ld",&n);
    int c=count(n);
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}