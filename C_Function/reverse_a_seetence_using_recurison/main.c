#include <stdio.h>
#include <stdlib.h>

void reverse();
int main()
{

    printf("enter a sentense\n");
    reverse();
    return 0;
}
void reverse()
{
    char c;
    scanf("%c",&c);
    if (c!='\n')
     {
         reverse();
         printf("%c",c);
     }

}
