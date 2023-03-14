#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *  free_grid - free a 2 dimensional array of integers.
 * @grid: 2D array
 * @height: height of 2D array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
