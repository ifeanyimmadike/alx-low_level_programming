#inlude "main.h"
/**
 *_sqrt_recursion - recurses to find the natural
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: 0
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}

