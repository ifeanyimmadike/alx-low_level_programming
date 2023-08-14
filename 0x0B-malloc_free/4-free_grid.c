#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function how to free
 * @height: height input
 * @grid: input pointer
 * Return: pointer
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

