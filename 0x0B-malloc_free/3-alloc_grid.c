#include "main.h"

int **alloc_grid(int width, int height)
{
    int **grid, i = 0;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    grid =(int**) malloc(width * sizeof(int));
    {
        if (grid == NULL)
        {
            exit(0);
        }
        while (i < width)
        {
            grid[i] = (int*)malloc(height * sizeof(int));
            i++;
        }
        if (grid == NULL)
        {
            exit(0);
        }
        free(grid);
        return (NULL);
    }
    return (grid);
}