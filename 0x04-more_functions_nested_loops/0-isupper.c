#include "main.h"
/**
 *_isupper- uppercase detector
 *@c:input character
 *Return: c
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
