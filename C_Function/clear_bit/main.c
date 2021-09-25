#include <stdio.h>
#include <stdlib.h>
int clear_bit(int n,int bit)
{
    return n&=~(1<<bit);
}
int main()
{
    int n,bit;
    printf("enter a number :");
    scanf("%d",&n);
    printf("entr a bit :");
    scanf("%d",&bit);
    printf("result= %d",clear_bit(n,bit));
    return 0;
}
