#include "main.h"
/**
 * _strchr- function to compare charecter if c in s
 *@s:char input
 *@c: char input
 *Return:0
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return (0);
}
