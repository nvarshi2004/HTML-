#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n,sum=0;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("The elements of the array are: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }

    }
    printf("The sum of the diagonal elements is: %d",sum);
    return 0;
}