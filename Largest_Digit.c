#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int max=0;
    while(n!=0)
    {
        int r=n%10;
        if(r>max)
        {
            max=r;
        }
        n=n/10;
    }
    printf("%d",max);
}