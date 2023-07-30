#include "main.h"

/**
 * print_array - a function that prints number elements of an array
 * @a: array name
 * @n: is the number of elements OF the array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

