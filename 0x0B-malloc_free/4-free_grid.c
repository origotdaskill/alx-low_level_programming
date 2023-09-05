#include <stdlib.h>

/**
 * free_grid - frees a 2D grid created by alloc_grid
 * @grid: the 2D grid to be freed
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	/* Free each row of the grid */
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	/* Free the array of row pointers */
	free(grid);
}
