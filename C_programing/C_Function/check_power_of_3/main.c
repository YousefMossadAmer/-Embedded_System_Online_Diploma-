#include <stdio.h>
#include <stdlib.h>
void check_power3 (unsigned n)
{
    double i;
    i=log(n)/log(3);
    if (i==trunc(i))
        printf("%d==>0",n);
    else
        printf("%d==>1",n);
}
int main()
{
   unsigned n;
   printf("enter a +ve number :");
   scanf("%d",&n);
   check_power3 (n);
    return 0;
}
