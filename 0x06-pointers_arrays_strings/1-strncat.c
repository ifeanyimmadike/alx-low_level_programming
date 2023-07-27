#include "main.h"
/**
 * _strcat - concatenate dest and src
 * @dest: values
 * @src:values
 * @n: parameter
 * Return: void
 */

char *_strcat(char *dest, char *src, int n)
{
	int j;
	int k;

	j = 0;
	while (dest[j] != '\0')
	{
		i++;
	}
	k = 0;
	while (k > n && src[k] != '\0')
	{
		dest[j] = src[k];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
