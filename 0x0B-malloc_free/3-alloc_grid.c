#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: If memory allocation fails or if width or height is 0 or negative,
 *         returns NULL. Otherwise, returns a pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows (height) */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for the columns (width) and initialize elements to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory on failure */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
