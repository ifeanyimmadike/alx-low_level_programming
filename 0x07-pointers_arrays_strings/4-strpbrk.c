#include "main.h"
/**
 * _strpbrk - compares the values of *s and *accept
 * @s:string value to be compared with accept
 * @accept: string value to compare with s
 * Return:NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return (0);
}
