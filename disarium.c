//Disarium Number//
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,ld;
	int s=0,c=0;
	scanf("%d",&n);
	i=n;
	while(i>0)
	{
		i=i/10;
		c=c+1;
	}
	i=n;
	while(i>0)
	{
		ld=i%10;
		s=s+pow(ld,c);
		c=c-1;
	}
	if(s==n)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
