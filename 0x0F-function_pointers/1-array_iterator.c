#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ik;

	if (array == NULL || action == NULL)
		return;

	for (ik = 0; ik < size; ik++)
	{
		action(array[ik]);
	}
}


