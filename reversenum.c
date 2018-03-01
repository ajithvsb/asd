#include <stdio.h>

int main(void) {
	int a,c=0,n=0;
	scanf("%d",&a);
	while(a!=0)
	{
		n=a%10;
		c=c*10+n;
		a=a/10;
		
	} 
	printf("%d",c);
	return 0;
}
