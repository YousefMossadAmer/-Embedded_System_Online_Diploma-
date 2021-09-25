#include <stdio.h>
#include <stdlib.h>


int prime (int x,int y)
    {
        for (int i=x;i<=y;i++)
        {
            if (i%2 && i%3 && i%5)
                printf("%d\n",i);
        }
    }
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);



 prime ( x, y);

    return 0;
}
