
#include<stdio.h>
int main()
{ int min,min1,hour,hour1,hour2,min2;
scanf("%d\t%d",&hour,&min);
scanf("%d\t%d",&hour1,&min1);
hour2=hour-hour1;
min2=min-min1;
printf("%d\t%d",hour2,min2);
return 0;
}
