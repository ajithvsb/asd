
#include<stdio.h>
int main()
{
    int a,i,b=2;
    scanf("%d",&a);
    for(i=1;i<10000;i++)
    {
      b=b*2;
      if(b>a)
      {
      printf("%d",b);
      break;
      }
    }
    return 0;
}
