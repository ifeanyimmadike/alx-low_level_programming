#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grind-a function how to free
 * @grind:pointer
 * @height:height input
 * Return:pointer
 */
void free_grid(int **grid, int height)
{
	int jk;

	for (jk = 0; jk < height; jk++)
	{
		free(grid[jk]);
	}
	free(grid);
}

