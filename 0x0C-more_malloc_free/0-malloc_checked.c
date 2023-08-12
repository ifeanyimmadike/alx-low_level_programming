#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked-memory allocation
 * @b:size input
 * Return:0
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(sizeof(unsigned int) * b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
