#include <stdio.h>
#include <stdlib.h>
void revesre_array (int size ,int a[],int b[])
{
    int i ,j;
    for (i=size-1,j=0;i>0,j<size;i--,j++)
        b[j]=a[i];
        printf("\noutput:");
     for (i=0;i<size;i++)
        printf("\t%d",b[i]);
}

int main()
{
    int a[100],b[100],size,i;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter array ");
    for (i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("input: ");
    for (i=0;i<size;i++)
        printf("\t%d",a[i]);
 revesre_array (size , a, b);

    return 0;
}
