#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: no of argument
 * Return:0
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = ",";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c %s", va_arg(args, int), sep);
					break;
				case 'i':
					printf("%d %s", va_arg(args, int), sep);
					break;
				case 'f':
					printf("%f %s", va_arg(args, double), sep);
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					i++;
					continue;
			}
			i++;
		}
	}

	printf("\n");
	va_end(args);
}

