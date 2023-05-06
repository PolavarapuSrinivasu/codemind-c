#include<stdio.h>
int prime(int);
int main()
{
	int n,dc=0,pc=0,r;
	scanf("%d",&n);
	if(prime(n))
	{
		while(n>0)
		{
			r=n%10;
		    dc=dc+1;
			if(prime(r))
			{
				pc=pc+1;
			}
			n=n/10;
		}
		if(dc==pc)
		{
			printf("Megaprime");
		}
		else
		{
			printf("Not Megaprime");
		}
	}
}
int prime(int x)
{
	int i,c=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			c=c+1;
		}
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

