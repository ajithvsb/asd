#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	char b[20];
	int l,n;
	scanf("%s",a);
	scanf("%s",b);
	 l=strlen(a);
             n=strlen(b);
	 if(l>n){
	 	printf("%s",a);
	 }
	 else{
	 	printf("%s",b);
	 } return 0; }
