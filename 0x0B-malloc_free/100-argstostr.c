#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function to concatenate
 * @ac: input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *sr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	sr = malloc(sizeof(char) * l + 1);
	if (sr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		sr[r] = av[i][n];
		r++;
	}
	if (sr[r] == '\0')
	{
		sr[r++] = '\n';
	}
	}
	return (sr);
}


