#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(1)
    {
        if(n<10)
        {
            printf("%d",n);
            break;
        }
        else
        {
            int s=0;
            while(n!=0)
            {
                int r=n%10;
                s+=r;
                n=n/10;
            }
            n=s;
        }
    }
}