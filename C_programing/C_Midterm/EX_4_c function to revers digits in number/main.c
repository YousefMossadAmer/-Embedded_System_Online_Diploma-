#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num, r_num = 0;

  printf("Enter a number to reverse\n");
  scanf("%d", &num);
  printf("Reverse of the number -->");
  while (num != 0)
  {
    r_num=num%10;
    printf("%d",r_num);
    num=num/10;

  }

  return 0;
}
