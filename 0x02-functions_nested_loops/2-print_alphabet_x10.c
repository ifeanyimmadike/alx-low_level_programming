#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - print alphabet in lower case in x10
 *
 *Return = 0
 */
void print_alphabet_x10(void)
{
	char c;
	char d;

	for (d = 1 ; d <= 10 ; d++)
	{

		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
