#include "lists.h"
/**
 * first_print-function to printf str before the string of main
 */
void first_print(void) __attribute__ ((constructor));
void first_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
