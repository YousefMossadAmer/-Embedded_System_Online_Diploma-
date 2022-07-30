#include <stdio.h>
#include <stdlib.h>
int sum_ (void);
int sum,count;
int main()
{

    sum_();

}
int sum_ ()
{
    sum=sum+count;
    count++;
    if (count==101)
    {
        printf("sum numbers from 1 to 100 = %d",sum);
        exit(0);

    }
    sum_();
}
