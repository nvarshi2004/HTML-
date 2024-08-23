#include <stdio.h>
int main()
{
    int a[10],i,n,e_count=0,o_count=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Array Elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
      if(a[i]%2==0)
      {
         e_count++;
      }
      else
      {
        o_count++;
      }
    }
    printf("\neven numbers count: %d\n",e_count);
    printf("odd numbers count:%d\n",o_count);
    int *even=(int*)malloc(e_count*sizeof(int));
    int *odd=(int*)malloc(o_count*sizeof(int));
    int even_index=0,odd_index=0;
    for(i=0;i<n;i++)
    {
        if (a[i]%2==0)
        {
             even[even_index++]=a[i];
        }
        else
        {
        odd[odd_index++]=a[i];
        }

    }
    printf("\nEven Numbers array: \n");

    for(i=0;i<e_count;i++)
    {
        printf("%d\t",even[i]);
    }
    printf("\nOdd Numbers array: \n");
    for(i=0;i<o_count;i++)
    {
        printf("%d\t",odd[i]);
    }

return 0;

}