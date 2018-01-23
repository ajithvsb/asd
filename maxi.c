#include<stdio.h>
int main()
{
int a[10],i,j,tp;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
tp=a[i];
a[i]=a[j];
a[j]=tp;
}
}
}
printf("the max number is %d",a[9]);
return 0;
}
