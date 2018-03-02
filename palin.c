#include <stdio.h>
#include<string.h>
int main() {
	char a[100],b[100];
	int l,i,n=0,count=0;
	scanf("%s",a);
	l=strlen(a);
	strcpy(b,a);
	n=l-1;
	for(i=0;i<=l-1;i++)
	{
	  a[i]=b[n];
	  n--;}	 n=l-1;
	 for(i=0;i<l-1;i++)
	 {
	 	if(a[i]!=a[n])
	 	{
	 		count++;
	 	} n--;
	 }
	if(count==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");	
	}
	return 0;
}
