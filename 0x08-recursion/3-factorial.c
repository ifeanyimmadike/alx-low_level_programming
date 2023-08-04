#include "main.h"
/**
 * factorial- factorial!!!!!
 * @n:number of factorials
 * Return:0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n-1));
}
