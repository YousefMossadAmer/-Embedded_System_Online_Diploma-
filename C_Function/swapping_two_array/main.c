#include <stdio.h>

int main()
{
    int a[10],b[10],c[10],i;
    printf("Enter First Array->");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\n Enter Second Array->");
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);
    printf("\n array before swapping \n first array->\t ");
     for(i=0;i<10;i++)
        printf("\t%d",a[i]);
    printf("\n second array->\t ");
    for(i=0;i<5;i++)
        printf("\t%d",b[i]);

    for (i=0;i<10;i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    printf("\n array after swapping \n first array->\t ");
     for(i=0;i<5;i++)
        printf("\t%d",a[i]);
    printf("\n second array->\t ");
    for(i=0;i<10;i++)
        printf("\t%d",b[i]);
    return 0;
}
