#include "main.h"
/**
 *print_sign- checks for signs
 *@n: number parameter
 *Return: 1 0 -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	_putchar('\n');
	return (0);
}
