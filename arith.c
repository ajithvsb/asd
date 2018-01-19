#include <stdio.h> 
int main() 
{
 int N,A,D,value,sum=0,i,terms;
   printf("Enter the number of terms:");
    scanf("%d", &terms);
    printf("Enter N term and D: \n");
    scanf("%d %d",&N,&D);
    value = N;
    printf("SERIES\n");
    for(i = 0; i < terms; i++)
     {
       if(1<=N||D<=10000)
       {
        printf("%d ", value);
        sum += value;
        value = value+D;
      }
      else
      {
       printf("\nSum of the series till %d terms is %d\n", terms, sum);
      }
 return 0;
}
