#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function to concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, jk;
	int len1 = 0, len2 = 0;
	char *conct;

	if (s1 == NULL && s2 == NULL)
	return (NULL);
	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;
	conct = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (conct == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	{
		conct[i] = s1[i];
	}
	for (jk = 0; jk < len2; jk++)
	{
		conct[len1 + jk] = s2[jk];
	}
	conct[len1 + len2] = '\0';
	return (conct);
}

