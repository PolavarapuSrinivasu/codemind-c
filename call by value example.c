#include<stdio.h>
void modify(int a)
{
	a=a+1; //10+1=11
	printf("%d\n",&a);
}
int main()
{
	int a=10;
	printf("%d\n",&a);
	modify(a); //Function Call
	printf("%d",a);
}
