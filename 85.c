#include <stdio.h>

int main(void) {
	char a[100];
	int i,l=0,m=0;
	scanf("%s",a);
	l=strlen(a);
	m=l-1;
	for(i=0;i<=m;i++)
	{
		if(i%2==0)
		{
			printf("%c",a[i]);
		}
	
	} printf("\n");
		for(i=0;i<=m;i++)
	{
		if(i%2!=0)
		{
			printf("%c",a[i]);
		}
	
	}
	return 0;
}
