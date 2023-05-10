#include<stdio.h>
int main()
{
	//char str[10]={'s','r','i','n','i','v','a','s','u',};
	//char str[]={'s','r','i','n','i','v','a','s','u',};
	//char str[10]="srinivasu";
	//char str[]="srinivasu";
	char str[10];
	//scanf("%s",str); read
	//scanf("%[^\n]s",str); read including space
	gets(str); //another way to read
	printf("%s",str);
}
