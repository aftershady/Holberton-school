#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free memory for a 2d array
 * @grid: pointer on array's
 * @height: number of adress of array's
 * Description: take grid and free all cases allowed then free grind
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
	}
}
