#include <stdio.h>

int main(void) {
	int n,i=0,a[100],j,b=0;
	scanf("%d",&n);
	while(n>0)
	{ a[i]=n%10;
		n=n/10;
		i++;
		b++;
	}
	for(j=b-1;j>=0;j--)
	{
		printf("%d\t",a[j]);
	}
	return 0;
}
