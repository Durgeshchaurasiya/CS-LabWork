#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            if(i%2!=0)
            {
                printf("*");
            }
            else
            {
             printf("$");
            }
        }
        printf("\n");
    }
    return 0;
}