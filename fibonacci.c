#include <stdio.h>

int main() 
{
int a=0,b=1,c=0,i,n;
scanf("%d",&n);
printf("%d\n%d",a,b);
 for(i=2;i<=n;i++)
 {
 	c=a+b;
 	a=b;
 	b=c;
 	printf("\n%d",c);
 }
	return 0;
}
