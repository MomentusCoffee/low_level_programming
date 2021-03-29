#include "headerfile.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free 2d array
 * @grid: double pointer
 * @height: int
 */
void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
		free(grid[z]);
	free(grid);
}
