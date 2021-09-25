#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],result;
    printf("enter a string :");
    gets(a);
    printf("enter your name :");
    gets(b);
    result=stricmp(a,b);
    if (result==0)
        printf("identical");
    else
    printf("different");

    return 0;
}
