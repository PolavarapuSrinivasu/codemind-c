#include<stdio.h>
int prime(int);
int reverse(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=reverse(n);
	if(prime(n) && prime(res))
		{
			printf("c prime");
		}
		else
		{
			printf("not c prime");
		}
	}
	int prime(int n)
	{
		int i,c=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				c=c+1;
			}
	if(c==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
}
int reverse(int t)
{
	int n,r,rev=0;
	n=t;
	while(t!=0)
	{
		r=t%10;
		rev=rev*10+r;
		t=t/10;
	}
	if(n==rev)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

