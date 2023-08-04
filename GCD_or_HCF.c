#include<stdio.h>
int max(int a, int b) 
{ 
    return (a > b) ? a : b; 
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int m=max(a,b);
    int i,gcd;
    for(i=1;i<m;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
    
}