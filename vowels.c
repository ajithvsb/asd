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
        if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='0'||a[i]=='u')||(a[i]=='A'|| a[i]=='E'||a[i]=='I'||a[i]=='0'||a[i]=='U'))
        {
            count++;
        }
    } if(count==0)
    {
    	printf("not vowels");
    }
   else
   {
    	printf(" vowels");	
   }
    return 0;
}
