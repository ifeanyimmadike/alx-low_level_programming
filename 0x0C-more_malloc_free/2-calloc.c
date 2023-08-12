#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc-function to allocate memory with malloc
 * @nmemb:array
 * @size:size
 * Return:0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(size);
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
