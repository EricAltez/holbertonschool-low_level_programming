#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_grid - frees memory
 *@grid: pointer to grid
 *@height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
