#include<stdio.h>
int main()
{
	char str[100],i;
	int len1=0,len2=0,len3=0,len4=1;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		//vowels count
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
		|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			len1++;
		}
		//consonants count
		else
		{
			len2++;
		}
		//numbers count
		if(str[i]>=48 && str[i]<=57)
		{
			len3++;
		}
		//word count
		if(str[i]==' ')
		{
			len4++;
		}
	}
	printf("%d %d %d %d",len1,len2,len3,len4);
}
