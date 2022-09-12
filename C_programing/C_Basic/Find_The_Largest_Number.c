#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    printf("enter three number\n");
    scanf("%f%f%f",&x,&y,&z);
    if(x>y && x>z)
        printf("the largest number : %f ",x);
    else if (y>x && y>z)
        printf("the largest number : %f ",y);
    else if (z>x && z>y)
        printf("the largest number : %f ",z);
    return 0;
}
