#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0 ; c <= 15 ; c++)
	{
		if (c < 10)
		{
			putchar(c + '0');
		}
		else
		{
			putchar(c - 10 + 'a');
		}

	}
	return (0);
}
