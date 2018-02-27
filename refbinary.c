#include <stdio.h>

int main(void) {
	int n,a,count=0,b=0;
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		count++;
		if(a==1||a==0)
		b++;
		n=n/10;
	}
	if(count==b)
	printf("\n yes");
	else
	printf("\n no");
	return 0;
}
