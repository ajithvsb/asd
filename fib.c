
#include <stdio.h>

int main() 
{
int t=0,b=1,c=0,i,n;
scanf("%d",&n);
printf("%d\n%d",t,b);
 for(i=2;i<=n;i++)
 {
 	c=t+b;
 	t=b;
 	b=c;
 	printf("\n%d",c);
 }
	return 0;
}
