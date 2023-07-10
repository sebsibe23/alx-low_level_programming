#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees up 2d array.
 * @grid: 2d grid.
 * @height: Dimension of grid's height.
 * Description: frees up grid memory.
 * Return: return nothing.
 *
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
