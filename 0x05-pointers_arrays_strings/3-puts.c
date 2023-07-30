#include "main.h"
/**
 * _puts - insert strings awith a newline
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

