#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y ;
    char c ;
    printf("enter operator either + or - or * or /\n ");
    scanf("%c",&c);
    printf("enter a two number");
    scanf("%f%f",&x,&y);
    switch(c)
    {

        case'+':
            printf("%f+%f=%f",x,y,x+y);
            break;
        case'-':
             printf("%f-%f=%f",x,y,x-y);
             break;
        case'*':
             printf("%f*%f=%f",x,y,x*y);
             break;
        case'/':
             printf("%f/%f=%f",x,y,x/y);
             break;
        default:
            printf("error !! operator is not correct");
            break;
    }

    return 0;
}
