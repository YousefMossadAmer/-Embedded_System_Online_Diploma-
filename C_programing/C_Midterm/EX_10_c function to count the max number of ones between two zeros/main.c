#include <stdio.h>
#include <string.h>
int m_ones (int n);
int main( )
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
    m_ones ( n);

	return 0;
}
int m_ones (int n)
{
    int count;
    while (n!=0)
    {
        n=n&(n<<1);
        count++;
    }
    printf("max one between two zero = %d",count);
}
