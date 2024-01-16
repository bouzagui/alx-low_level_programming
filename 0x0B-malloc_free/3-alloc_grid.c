#include "main.h"

/**
 * alloc_grid - allocate a grid from the given 2 dimensions.
 * @width: the width of the grid.
 * @height: the height of the grid.
 * Return: the newly allocated grid.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
    int i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		exit(0);
	}

	while (i < width)
	{
		grid[i] = (int *)malloc(sizeof(int *) * width);
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
