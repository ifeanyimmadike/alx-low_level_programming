#include "main.h"
/**
 * _print_rev_recursion- prints the reverse of a string
 * @s:character input
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		putchar(*s);
	}
	return (0);
}
