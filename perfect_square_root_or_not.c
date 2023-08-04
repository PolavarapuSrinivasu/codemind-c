#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=sqrt(n);
    int p=s*s;
    if(p==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}