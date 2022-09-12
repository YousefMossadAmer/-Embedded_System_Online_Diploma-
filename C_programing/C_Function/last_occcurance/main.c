#include <stdio.h>
#include <stdlib.h>
    int last;

int last_occurance(int a[],int size)
{
    printf("enter the number  ");
    scanf("%d",&last);
    for (int i=size-1;i>0;i--)
    {
        if(a[i]==last)
            return i+1;
    }
    return -1;
}
int main()
{
    int a[100],size,i;
    printf("enter size of array ");
    scanf("%d",&size);
    for (i=0;i<size;i++)
    {
        printf("enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    last=last_occurance(a,size);
    printf("\nlast occurance is: %d",last);
    return 0;
}
