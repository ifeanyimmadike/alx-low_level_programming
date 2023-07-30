#include "main.h"
/**
 * _strcpy- copy source to destination(dest)
 *@dest: destination of copied string
 *@src: string to be copied
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char m;

	for (i = 0 ; src != '\0'; i++)
	{
		src[i] = m;
	}
	for (i = 0 ; dest != '\0'; i++)
	{
		src[i] = m;
		dest[i] = src[i];
		dest[i] = m;
	}
	return (dest);
