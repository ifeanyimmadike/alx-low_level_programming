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
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	for (i = 0; i < size; i++)
	{
		s[i] = malloc((sizeof char) * nmemb)
		if (s == NULL)
			return (NULL);	
	}
	return (s);
}
