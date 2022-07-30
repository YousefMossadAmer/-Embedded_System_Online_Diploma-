#include <stdio.h>
#include <stdlib.h>
int r_array(int arr[],int siez);
int main()
{
    int arr[100];
    int siez, i;

    printf("Enter siez of the array: ");
    scanf("%d", &siez);
    printf("Enter elements in array:\n ");
    for(i=0; i<siez; i++)
    {
        scanf("%d", &arr[i]);
    }
    r_array(arr,siez);
    printf("array after  reverse :\n");
     for(i=0; i<siez; i++)
    {
        printf("%d ",arr[i]);
    }
}
int r_array(int arr[],int siez)
{
    int i,j,temp;
    for (i=0,j=siez-1;i<siez/2;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
