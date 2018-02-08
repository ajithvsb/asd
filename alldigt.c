#include <stdio.h>

int main()
 {
int a[100],i,b=0,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
	b=b+a[i];
} printf("%d",b);
	return 0;
}
