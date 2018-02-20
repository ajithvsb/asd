#include<stdio.h>
#include<string.h>
int main(){
	int a,b,n;
	scanf("%d\t%d\t%d",&a,&b,&n);
	if(n>=a&&n<=b)
	{
		printf("yes");
	}
	else
	{
			printf("no");
	}
	return 0;
}
