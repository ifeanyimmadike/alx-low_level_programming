#include "main.h"
/**
 * _strspn- function that get the length of a string
 *@s:input string
 *@accept:compares this with s and get the length
 *Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, b, c;
	c = 0;

	for (i = 0; accept[i] <= '\0'; i++)
	{
		c++;
	}
	b = 0;
	for (j = 0; s[j] <= '\0'; j++)
	{
		if (s[j] == accept[i])
		{
			b++;
		}
	}
	return (b);
}
