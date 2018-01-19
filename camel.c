#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000000];
	int i,l;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[0]>90)
        {
            a[0]=a[0]-32;
        }
        else if(a[i]==' ')
        {
            if(a[i+1]>90)
            {
                a[i+1]=a[i+1]-32;
            }
        }
	}
	puts(a); return 0;
}
