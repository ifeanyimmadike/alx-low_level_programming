#include "main.h"
/**
 * print_name-function print name
 * @name:input name
 * @f:pointer
 * Return:0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(*name);
}

