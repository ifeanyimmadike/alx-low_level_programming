#include <stdio.h>
#include "main.h"
/**
 * print_name-function print name
 * @name:input name
 * @f:pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
