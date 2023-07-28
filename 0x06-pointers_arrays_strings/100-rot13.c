#include "main.h"
#include <stdio.h>

/**
 * rot13 - world war enigma rot13
 * @m: pointer to string params
 *
 * Return: *m
 */

char *rot13(char *m)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; m[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (m[i] == data1[j])
			{
				m[i] = datarot[j];
				break;
			}
		}
	}
	return (m);
}


