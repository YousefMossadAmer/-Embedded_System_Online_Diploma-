#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int siez, i;
    char arr[100];
    printf("enter string : \n");
    gets(arr);
    siez=strlen(arr);
    r_array(arr,siez);
}
void r_array(char arr[],int siez)
{
    int i=0,x=0,m=0,j=0,count=0;
    char arr_r[100];
    for (  i=siez-1;i>=0;i--)
    {
        if (arr[i]==' ')
        {
            for( j=siez-++count,x=0; j<siez; j++,x++)
            {
                arr_r[x]=arr[j];
            }
            for( m=0; m<x;m++)
            {
                printf("%c",arr_r[m]);
                if (arr[m]==' ') break;
            }
        }
        else
          count ++;
    }
    printf(" ");
      for( m=0; m<x;m++)
            {
                printf("%c",arr[m]);
                if (arr[m]==' ') break;
            }
}

