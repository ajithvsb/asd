#include<stdio.h>
int main()
{
int min,max,i,n,flag;
printf("Enter the min value");
scanf("%d",&min);
printf("Enter the max value");
scanf("%d",&max);
for(i=min;i<max;i++)
{
for(i=2;i<=n/2;i++)
{
flag=1;
break;
}
if(flag==0)
printf("%d is a prime number",n);
else
printf("%d is not a prime number",n);
return 0;
}
