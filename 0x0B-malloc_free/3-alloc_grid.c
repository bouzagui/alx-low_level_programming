#include "main.h"

/**
 * alloc_grid - allocate a grid from the given 2 dimensions.
 * @width: the width of the grid.
 * @height: the height of the grid.
 * Return: the newly allocated grid.
*/
int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int**) malloc(width * sizeof(int*));
	if (grid == NULL)
	{
		return (NULL);
	}

	while (i < width)
	{
		grid[i] = (int*)malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
			while (j <= i)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
		i++;
	}
	return (grid);
}
