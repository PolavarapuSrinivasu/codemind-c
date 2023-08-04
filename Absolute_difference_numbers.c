#include<stdio.h>
#include<math.h>
int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    int t=n;
    int c=0;
    while(t!=0)
    {
        int r=t%10;
        c+=1;
        t=t/10;
    }
    int s=c-d;
    int m,v;
    m=pow(10,d);
    v=pow(10,s);
    int a,b;
    a=n%m;
    b=n/v;
    if(a>b)
    {
        printf("%d",a-b);
    }
    else
    {
        printf("%d",b-a);
    }
    
}