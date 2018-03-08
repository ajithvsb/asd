#include<stdio.h>
int main()
{
	int a=0,n,i,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
	 a=n%10;
	 if(a%2!=0)
	 {
	 	printf("%d\t",a);
	 }
	 n=n/10;
	}

return 0;
}
