#include "main.h"
/**
 * print_most_numbers- print numbers that are not 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0 ; a < 9; a++)
	{
		if (a != 2)
		{
			if (a != 4)
			{
				_putchar(a);
			}
		}
	}
	_putchar('\n');
}
