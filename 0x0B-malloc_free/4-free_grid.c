#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by
 * the alloc_grid function.
 * @grid : the created grid previously.
 * @height : height of the grid.
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0 ; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
