#include "main.h"
/**
 *reverse_array - gives the reverse of the string
 *@a: string input
 *@n: the number of iteration
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	i = 0;
	while (i < n--)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		i++;
	}
}

