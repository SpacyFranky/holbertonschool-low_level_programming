#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width : width of array
 * @height : height of array
 * Return: a pointer to the array.
 */
int **alloc_grid(int width, int height)
{
int **a;
int i, j;
if (width == 0 || height == 0)
return (NULL);
a = (int **)malloc(width * sizeof(int *));
for (i = 0 ; i < width ; i++)
a[i] = (int *)malloc(height * sizeof(int));
if (a == 0)
return (NULL);
for (i = 0 ; i < width ; i++)
{
for (j = 0 ; j < height ; j++)
{
a[i][j] = 0;
}
}
return (a);
}
