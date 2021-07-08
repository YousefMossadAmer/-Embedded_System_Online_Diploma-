#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, temp;
    printf("enter value of a\n");
    scanf("%f",&a);
    printf("enter value of b\n");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;

    printf(" value of a after swaping %f",a);
    printf(" \n value of b after swaping %f",b);
return 0;
}
