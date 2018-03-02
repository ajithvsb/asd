#include <stdio.h>
#include<string.h>

int main()
{
	char a[100];
	int b=0,l,n=0;
    scanf("%s",a);
    l=strlen(a);
    b=(l-1)/2;
    n=l-1;
    a[n-b]='*';
    printf("%s",a);
    return 0;
}
