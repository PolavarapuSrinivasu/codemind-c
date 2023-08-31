#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[10],i=0;
    while(n!=0)
    {
        int r=n%10;
        arr[i]=r;
        i++;
        n=n/10;
    }
    int c=0;
    for(int j=0;j<i+1;j++)
    {
        for(int k=j+1;k<i+1;k++)
        {
            if(arr[j]==arr[k])
            {
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}