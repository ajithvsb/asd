#include<stdio.h>
#include<conio.h>
int main()
{
char s1[20],s2[10];
printf("enter a string");
scanf("%s",&s1);
int i,j;
i=0;
if(i%2==0)
{
temp=s1[i];
s2[i]=s1[i+2];
s1[i+2]=temp;
i++;
printf("%s",s1[i+2]);
}
else
{
temp=s1[i];
s2[i]=s1[i+1];
s1[i+1]=temp;
printf("%s",s1[i+2]);
i++;
}return 0;
}
