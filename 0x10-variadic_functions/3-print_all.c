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
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						printf("(nil)");
					if (!str)
						str = NULL;
					printf("%s", str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			printf("%s\t", sep);
		}
	}

	printf("\n");
	va_end(args);
}

