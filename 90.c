#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]; int i, j;
	scanf("%s",a);
	j=strlen(a);
	for(i=0;i<j;i++)
	{
		if((a[i]<='9')&&(a[i]>='0'))
		{
			printf("%c",a[i]);
		}
	}return 0;
}
