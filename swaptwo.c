
#include <stdio.h>
int main()
{

int a,b,c=0;
scanf("%d\t%d",&a,&b);
c=a;
a=b;
b=c;
printf("a and b swap is %d\t%d",a,b);
	return 0;
}
