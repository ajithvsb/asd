#include <stdio.h>
#include<string.h>
int main()
{
	int a,s,b=1;
	scanf("%d",&a);
	while(a!=0)
	{
		s=a%10;
		b=b*s;
		a=a/10;
		
	}
	printf("%d",b);
	return 0;
}
