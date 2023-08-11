#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat-function to concatinate two string
 * @s1:string
 * @s2:string2
 *Return:0
 */
char *str_concat(char *s1, char *s2)
{
	int i, jk;
	int *conct;
	int len1, len2 = 0;

	if (s1 == NULL || s2 == NULL)
		return (" ");
	while (s1[len1] !=  '\0')
		len1++;
	while (s2[len2] !=  '\0')
		len2++;

	conct = malloc(sizeof(char) * (i + jk + 1);
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
