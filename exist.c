#include<stdio.h>
int main()
{
	int n,b,a[100],i,j;
	scanf("%d\t%d",&n,&b);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<=n;j++)
	{
		if(a[j]==b)
		{
			printf("yes");
		}
	} 
	return 0;
}
