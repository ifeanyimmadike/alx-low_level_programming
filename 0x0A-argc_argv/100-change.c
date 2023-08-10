#include <stdio.h>
#include <stdlib.h>
/**
 * main-function to deduce customer change
 * @argc:argument count
 * @argv:argument vector
 * Return:0
 */
int main(int argc, char *argv[])
{
	int cents;
	int counter = 0;

	if ((argc - 1) != 1 || argc > 2)
	{
		printf("Error\n");
		return (0);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if(cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		counter++;
	}
	printf("%d\n", counter);
	return (0);
}
