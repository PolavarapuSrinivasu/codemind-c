#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int s=n*n;
    while(s!=0)
    {
        int r=s%10;
        c+=r;
        s=s/10;
    }
    if(c==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}