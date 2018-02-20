#include<stdio.h>
#include<string.h>
int main(){
	int a,b,n;
	scanf("%d",&n);
	while(n!=0)
	{      n=n/10;
		a++;
	}
	printf("%d",a);
	return 0;
}
