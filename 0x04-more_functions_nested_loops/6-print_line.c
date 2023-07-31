#include "main.h"
/**
 * print_line- draw a line when a digit is inputed
 * @n: the number of time to draw a line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
