#include "main.h"
/**
 * _strcpy- copy source to destination(dest)
 *@dest: destination of copied string
 *@src: string to be copied
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

