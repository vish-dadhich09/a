#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the value of 'n' : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {   
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}