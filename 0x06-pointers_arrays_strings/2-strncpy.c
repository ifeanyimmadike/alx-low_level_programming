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
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	k = 0;
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (desk);
}
