#include <stdio.h>
#include<string.h>
int main() {
	int i,k;
	scanf("%d \t %d",&i,&k);
	i=i^k;
	k=i^k;
	i=i^k;
	printf("%d %d",i,k);
	return 0;
}
