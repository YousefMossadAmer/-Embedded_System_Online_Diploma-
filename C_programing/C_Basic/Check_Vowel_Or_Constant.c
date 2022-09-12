#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("enter a character \n");
    scanf("%c",&c);
    (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')?printf("%c is voewl",c):printf("%c is constant",c);
    return 0;
}
