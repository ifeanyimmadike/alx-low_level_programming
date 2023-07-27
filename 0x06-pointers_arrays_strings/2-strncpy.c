#include "main.h"
/**
 * _strncpy - copy dest and src
 * @dest: values
 * @src:values
 * @n: parameter
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;
	int k;

	j = 0;
	while (j < n && dest[j] != '\0')
	{
		src[k] = des[j];
		j++;
		k++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	src[k] = '\0';
	return (src);
}
