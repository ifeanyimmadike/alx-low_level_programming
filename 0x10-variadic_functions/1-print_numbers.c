#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers-a function that prints strings
 * in-between numbers
 * @separator:strin input
 * @n: number of input numbers
 * Return:0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(args);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if (separator != NULL && n != 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
