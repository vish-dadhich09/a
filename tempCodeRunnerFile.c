#include<stdio.h>
int main()
{
   int i,n,j;
      printf("Enter the value of 'n' : ");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
         for(j=n;j>i;j--)
         {
            printf(" ");
         }
         for(j=i;j<(2*i)-1;j++)
         {
            printf("%d",j);
         }
         for(j=2*i-1;j>=i;j--)
         {
            printf("%d",j);
         }
         printf("\n");
      }
      return 0;
}