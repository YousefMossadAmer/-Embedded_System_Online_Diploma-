#include <stdio.h>
#include <stdlib.h>


void check_prime(int n1,int n2);

int main ()
{
    int n1,n2;
    printf("enter the first number:\n");
    scanf("%d",&n1);

    printf("enter the second number:\n");
    scanf("%d",&n2);

    printf("prime number between %d and %d -->:",n1,n2);
    check_prime( n1, n2);

    return 0;
}

void check_prime(int n1,int n2)
{

  int i,x,flag;
  for ( i=n1;i<=n2;i++)
    {
        flag =0;
        for(x=2;x<=i/2;x++)
        {
            if (i%x==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        printf("%d ",i);
    }
}
