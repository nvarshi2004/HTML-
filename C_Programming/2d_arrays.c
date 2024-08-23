//2d array with user input and print the output in matrix form
#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Element [%d][%d]: ", i, j);
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
}