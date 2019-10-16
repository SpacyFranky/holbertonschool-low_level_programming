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
int **a, *ptr;
int len = 0;
int i, j;
if (width == 0 || height == 0)
return (NULL);
len = sizeof(int *) * width + sizeof(int) * height * width;
a = (int **)malloc(len);
ptr = (int *) (a + width);
if (a == 0)
return (NULL);
for (i = 0 ; i < width ; i++)
a[i] = (ptr + height * i);
for (i = 0 ; i < width ; i++)
{
for (j = 0 ; j < height ; j++)
{
a[i][j] = 0;
}
}
return (a);
}
