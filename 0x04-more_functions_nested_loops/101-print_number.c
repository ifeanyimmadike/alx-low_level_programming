#include "main.h"
/**
 * print_number - print integers
 * @n: input
 * Return:n
 */
void print_number(int n)
{
	int i;

	for (i = 0 ; i <= n; i++)
	{ 
		if ( n % 10) == 0 || (n / 10) == 0)
		{
			printf("%d\n", n + '0');
		}
	}
	return (0)
}
