#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    int c=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            c+=1;
            break;
        }
    }
    if(c==1)
    {
        printf("not a prime");
    }
    else
    {
        printf("prime");
    }
}