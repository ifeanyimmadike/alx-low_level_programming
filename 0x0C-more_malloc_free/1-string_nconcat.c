#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat- contactination
 * @s1:input string
 * @s2:input string 2
 * @n:size
 * Return:0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int *conct;
	int len1, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;
	if (n < len2)
		conct = malloc(sizeof(char) * (len1 + len2 + n + 1));
	else
		conct = malloc(sizeof(char) * (len1 + n + 1));

	if (conct == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		conct[i] = s[i];
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		conct[i + len1] = s2[i];
	}
	conct[i + len1] = '\0';
	return (0);
}
