#include "main.h"

/**
 * free_grid - free the grid structure.
 * @grid: the grid structure.
 * @height: the height of the grid structure.
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}