#include<stdio.h>
#include<math.h>
int count(int n)
{
    int c=0;
    while(n!=0)
    {
        int r=n%10;
        c+=1;
        n=n/10;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int t=n;
    int c=count(n);
    int s=0;
    while(n!=0)
    {
        int r=n%10;
        s=s+pow(r,c);
        c=c-1;
        n=n/10;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}