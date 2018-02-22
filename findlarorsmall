#include <stdio.h>

int main() 
{
	int a[100],n,i,j,c=0;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	printf("small:%d\nlarge:%d",a[1],a[n]);
	return 0;
}
