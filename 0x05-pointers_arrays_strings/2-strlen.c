#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i ;
	
	for (i = 1 ; *s < '\0' ; i++)
	{
		s[i];
	}
	return (i);
}
