#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the 2-d grid created initially
 * @grid: 2-d array whose memory to be freed
 * @height: number of rows of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
