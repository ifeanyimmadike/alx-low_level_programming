#include "main.h"
/**
 * _strstr- function that compares tow str haystack and needle
 * and shows the occurence of *needle in *haystack
 * @haystack: input
 * @needle:input
 * Return:0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; ++haystack)
	{
		if (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		else if (*needle == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
