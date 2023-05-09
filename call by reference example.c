#include<stdio.h>
void modify(int *a)
{
	*a=*a+1; //10+1=11
}
int main()
{
	int a=10;
	printf("Before Modification: %d\n",a);
	modify(&a); //Function Call
	printf("After Modification: %d",a);
}
