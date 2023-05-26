#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=n;i>=1;i--)
    {
        c+=1;
        for(int j=c;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}