#include <stdio.h>

int main() 
{
	char n,a=0,b=0;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		b=a+b;
		n=n/10;
	}
	
	printf("%d",b);
	return 0;
}
