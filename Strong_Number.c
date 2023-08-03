#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n;
    int s=0,i;
    while(n!=0)
    {
        int r=n%10;
        int p=1;
        for(i=1;i<=r;i++)
        {
            p=p*i;
        }
        s+=p;
        n=n/10;
    }
    if(s==t)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
    
}