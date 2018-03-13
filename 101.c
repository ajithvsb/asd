#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,l,j;
	scanf("%s",a);
	l=strlen(a);
	scanf("%d",&j);
	for(i=l-j;i<=l-1;i++)
	{
	   printf("%c",a[i]);	
	} return 0;
}
