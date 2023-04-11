#include <stdlib.h>

/**
  * free_grid - free 2 dimensional grid
  * @grid: the grid
  * @height: grid height
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int x;

	/* checking for errors */
	if (grid == NULL || height == 0)
		return;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
