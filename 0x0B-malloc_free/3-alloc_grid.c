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
int i, j, k;
if (width <= 0 || height <= 0)
return (NULL);
a = (int **)malloc(height * sizeof(int *));
if (a == '\0')
return (NULL);
for (i = 0 ; i < height ; i++)
{
a[i] = (int *)malloc(width * sizeof(int));
if (a[i] == NULL)
{
for (k = 0 ; k < i ; k++)
free(a[k]);
free(a);
return (NULL);
}
for (j = 0 ; j < width ; j++)
a[i][j] = 0;
}
return (a);
}
