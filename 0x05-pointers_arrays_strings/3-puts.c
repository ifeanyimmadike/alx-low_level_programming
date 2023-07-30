#include "main.h"
/**
 * _puts - insert strings awith a newline
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(str++);
		i++;
	}
	_putchar('\n');
