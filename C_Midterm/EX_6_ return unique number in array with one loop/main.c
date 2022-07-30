#include <stdio.h>
#include <stdlib.h>

void uniq_num(int arr[],int siez);

int main()
{
    int arr[100],siez;

    printf("enter the siez of array :\n");
    scanf("%d",&siez);
    printf("enter the array :\n");
    for (int i =0;i<siez;i++)
    scanf("%d",&arr[i]);
    uniq_num(arr, siez);

    return 0;
}

void uniq_num(int arr[],int siez)
{
    int res=0,i;
    for ( i =0;i<siez;i++)
    {
        res=res^arr[i];
    }
    printf("uniq number --> %d",res);

}
