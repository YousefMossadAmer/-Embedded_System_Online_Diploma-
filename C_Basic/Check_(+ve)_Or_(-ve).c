#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num ;

    printf("enter a number\n");
    scanf("%f",&num);
    if (num>0)
        printf("%f is positive",num);
    else if(num<0)
        printf("\n %f is negetive ",num);
    else if (num==0)
        printf("\n you enterd zero ");

    return 0;
}
