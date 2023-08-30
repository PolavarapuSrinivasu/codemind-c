#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=2;i<=(n+1)/2;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        int x=prime(i);
        if(x==1)
        {
            printf("%d
",i);
        }
    }
}