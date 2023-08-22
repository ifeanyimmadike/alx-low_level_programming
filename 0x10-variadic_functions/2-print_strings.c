#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings-function of a print string
 * @separator:second string input
 * @n:number of string
 * Return:0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list(args);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", x);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
