#include<stdio.h>
#include<string.h>
int main(){
	int a,b[100],c=0,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	scanf("%d",&b[i]);	
	}
	for(i=1;i<=a;i++)
	{
	 c=c+b[i];	
	}
	printf("%d",c/a);
	return 0;
}
