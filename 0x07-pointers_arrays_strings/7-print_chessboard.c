#include "main.h"
/**
 * print_chessboard- function to print chessboard
 * @a:pointer
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int m, j;

	for (m = 0; m < 8; m++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[m][j]);
		}
		_putchar('\n');
	}
}
