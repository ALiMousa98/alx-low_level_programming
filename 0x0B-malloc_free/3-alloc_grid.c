#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *  alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: pointer to the new allocated array
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for ( ; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for ( ; j < i; j++)
				free(grid[j]);
			free(grid);
		}
		for ( ; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
