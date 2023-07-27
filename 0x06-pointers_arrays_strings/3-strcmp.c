#include "main.h"
/**
 * _strcmp - compare two strings s1 and s2
 *@s1: value
 *@s2: value
 *Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int m;

	i = 0;
	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}
