#include <stdio.h>
#include <stdlib.h>

int sumdigit(int);
int main()
{
    int n,sum;
    printf("enter a number:\n");
    scanf("%d",&n);
    sum=sumdigit(n);
    printf("number of ones = %d",sum);

    return 0;
}
int sumdigit(int n)
{
    int i,count=0;
    for (i=0;i<32;i++)
    {
        if (n & (1<<i) )
            count++;
    }
    return count ;

}
