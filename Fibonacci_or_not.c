#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c,i;
    if(n==a || n==b)
    {
        printf("True");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            c=a+b;
            if(n==c)
            {
                printf("True");
                break;
            }
            else if(c>n)
            {
                printf("False");
                break;
            }
            else
            {
                a=b;
                b=c;
            }
        }
    }
}