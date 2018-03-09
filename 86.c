#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int l,count=0,i,j;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{  for(j=i+1;j<l;j++)
	{
		if(a[i]==a[j])
		{
			count++;
		}}
	}
	if(count==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}  return 0;
}
