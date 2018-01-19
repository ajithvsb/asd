#include <stdio.h>
int main()
{
int a, i,j, flag = 0;
int start,stop;
printf("enter number");
scanf("%d",&a);
printf("enter the limits");
scanf("%d%d",&start,&stop);
for(j=start;j<=stop;j++)
{
for(i=2; i<=a/2; ++i)
{
if(a%i==0)
{
flag=1;
break;
}
}
if (flag==0)
printf("it is a prime number");
else
printf("it is not a prime number");
}
return 0;
}
