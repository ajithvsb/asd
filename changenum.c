#include <stdio.h>

int main(void) {
	int a[100],i,n;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]!=i)
		{
			printf("%d",i);
			break;
		}
	}
		

	return 0;
}
