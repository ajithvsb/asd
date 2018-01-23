#include<stdio.h>
int main()
{ int min,min1,hour;
scanf("%d",&min);
hour=min/60;
min1=min%60;
printf("%d\t%d",hour,min1);
return 0;
}
