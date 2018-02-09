#include <stdio.h>
#include<math.h>
int main() 
{ int n,i,c=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(pow(2,i)==n)
	{
	 c=1;	
	}
}if(c==1)
{printf("yes");
}
else
{
	printf("no");
}
	
