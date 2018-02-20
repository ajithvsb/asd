#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	char b[20];
	int l,n,i,m,j,c;
	scanf("%s",a);
	scanf("%s",b);
             l=strlen(a);
             n=strlen(b);
             m=l;
             c=l+m;
      
             for(j=0;j<=n;j++)
            
            {
            	a[m]=b[j]; m++;
             
             } 
             for(i=0;i<=c;i++)
             printf("%c",a[i]);
             return 0;
}
