#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,factorial=1,count;

    printf("enter a integer number\n");
    scanf("%d",&n);
    if(n>=0)
    {
        for(count=1;count<=n;count++)
        {
            factorial=factorial*count;
        }
        printf("factorial=%d",factorial);
    }
    else
    {
      printf("error!!! factorial of negetive number dosn't exist.");

    }

    return 0;
}
