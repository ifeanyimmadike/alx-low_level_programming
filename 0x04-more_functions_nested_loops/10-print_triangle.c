#include "main.h"
/**
 * print_triangle - function to print trigle
 * @size: size of triangle
 * Return:0
 */

void print_triangle(int size)
{
	int h, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (i = size - h; i > 0; i--)
				_putchar(' ');

			for (i = 0; i < h; i++)
				_putchar('#');

			if (h == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
