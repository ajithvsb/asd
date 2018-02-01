#include <stdio.h>
#include<string.h>
int main()
{
	int a[100],i,n,b;
	scanf("%d\t%d",&n,&b);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("%d",a[b]);
	return 0;
}
	
