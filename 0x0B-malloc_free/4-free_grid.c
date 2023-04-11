#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to the grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL)
		return;

	for (n = 0; n < height; n++)
		free(grid[n]);

	free(grid);
}
