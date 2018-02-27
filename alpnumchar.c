
#include <stdio.h>
#include<string.h>

int main()
{
    char a[50];
    int b,count=0,i;
    scanf("%[^\n]s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if((a[i]>=0&&a[i]<=9)||(a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
        {
            count++;
        }
    }
    if(count>0)
    {
     printf("yes");	
    }
    else
    {
     printf("no");	
    }
  
    return 0;
}
