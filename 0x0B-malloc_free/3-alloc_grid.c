#include "main.h"

int **alloc_grid(int width, int height)
{
    int **grid, i = 0;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    grid = (int**) malloc(width * sizeof(int*));
    if (grid == NULL)
    {
        exit(0);
    }

    while (i < width)
    {
        grid[i] = (int*)malloc(height * sizeof(int));
        if (grid[i] == NULL)
        {
            while (i > 0)
            {
                free(grid[--i]);
            }
            free(grid);
            return (NULL);
        }
        i++;
    }
    return (grid);
}