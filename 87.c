#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,i,m=0,c=0;
	scanf("%d\t%d",&a,&b);
	m=a>b?a:b;

	for(i=1;i<=m;i++)
	{  
		if((a%i==0)&&(b%i==0))
		{
			c=i;
			a=a/i;
			b=b/i;
		
		}  
	} printf("%d",c);
	
return 0;
}
