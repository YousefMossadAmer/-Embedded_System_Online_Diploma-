#include <stdio.h>
#include <stdlib.h>

int factorial(int num);
int main()
{
    int num;
    printf("enter a positive integer:");
    scanf("%d",&num);
    printf("factorial of %d = %d",num,factorial(num));
    return 0;
}
int factorial(int num)
    {
       if (num!=1)
        return num*factorial(num-1);
    }
