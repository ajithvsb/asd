#include<stdio.h>
int main()
{
	float n;
	int a;
	scanf("%f",&n);
             a=n*10;
             
             if(a%10>=5)
             {
               a=a+5;
               printf("%d",a/10);
             }
             else
             {
             	printf("%d",a/10);
             }
return 0;
}
