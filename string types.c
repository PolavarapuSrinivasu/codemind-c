//1--String Length -- strlen//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
	//char str[10];
	//int len;
	//scanf("%[^\n]s",str);
	//len=strlen(str);
	//printf("%d",len);
//}

//2--String Copy -- strcpy//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[100],copy[100];
//	scanf("%[^\n]s",str);
//	strcpy(copy,str);
//	printf("%s",copy);
//}

//3--String Uppercase -- strupr//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[100];
//	scanf("%[^\n]s",str);
//	strupr(str);
//	printf("%s",str);
//}

//4--String Lowercase -- strlwr//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[100];
//	scanf("%[^\n]s",str);
//	strlwr(str);
//	printf("%s",str);
//}

//5--String Reverse -- strrev//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[100];
//	scanf("%[^\n]s",str);
//	strrev(str);
//	printf("%s",str);
//}

//6--String Comparision -- strcmp//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[100],str2[100];
//	scanf("%[^\n]s",str1);
//	scanf(" %[^\n]s",str2);
//	int s=strcmp(str1,str2);
//	if(s==0)
//	{
//	    printf("Both are same");
//	}
	//else
	//{
	//	printf("Both are not same");
	//}
//	else if(s<0)
//	{
//		printf("str1<str2");
//	}
//	else
//	{
//		printf("str1>str2");
//	}
//}

//7--String Cat -- strcat//
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	scanf("%[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	strcat(str1,str2);
	printf("%s",str1);
}
