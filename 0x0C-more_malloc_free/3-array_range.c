#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers.
 * @min : minimum number
 * @max : maximum number
 * Return: array of integers.
 */
int *array_range(int min, int max)
{
int *a, i;
if (min > max)
return (NULL);
a = malloc(sizeof(int) * (max - min + 1));
if (a == 0)
return (NULL);
for (i = 0 ; min <= max ; i++)
{
a[i] = min;
min++;
}
return (a);
}
