#include "main.h"

void free_grid(int **grid, int height)
{
    int i = 0;

    while (i < height)
    {
        free(grid[i]);
    }
    free(grid);
}