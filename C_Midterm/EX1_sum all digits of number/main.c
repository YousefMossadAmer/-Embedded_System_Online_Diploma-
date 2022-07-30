#include <stdio.h>
#include <stdlib.h>


int sumdigit(int);
int main()
{
    int n,sum;
    printf("enter a number:\n");
    scanf("%d",&n);
    sum=sumdigit(n);
    printf("sum of digits = %d",sum);

    return 0;
}
int sumdigit(int n)
{
    int sum,remindr;
    while (n!=0)
    {
        remindr=n%10;
        sum=sum+remindr;
        n=n/10;

    }

    return sum ;

}
