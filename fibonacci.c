#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	int b=1;
	int c=a+b;
	printf("%d %d ",a,b);
	while(c<n)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
	printf("\n%d",c);
}
