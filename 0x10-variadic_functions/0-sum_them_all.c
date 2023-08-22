#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all- function that adds infinite num int
 * @n: number of integer
 * Return:0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);
	return (sum);
}


