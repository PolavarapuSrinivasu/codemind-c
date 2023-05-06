#include<stdio.h>
int main()
{
    int i,n,s,p,r,rev=0,c,b=0;
    scanf("%d",&n);
    s=n*n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    p=rev*rev;
    while(p>0)
    {
        c=p%10;
        b=b*10+c;
        p=p/10;
    }
    if(s==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
