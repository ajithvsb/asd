#include<stdio.h>
int main(){
    int i,j,k,a[100],n,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=n;j++)
    {
        for(k=j+1;k<=n;k++)
        {
            if(a[j]>a[k])
            {
                t=a[j];
                a[j]=a[k];
                a[k]=t;
            }
        }
    }
printf("%d",a[j/2]);
}
