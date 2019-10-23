#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer.
 * @array: array of integer
 * @size: size of array
 * @cmp: function
 * Return: int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
for (i = 0 ; i < size ; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
if (i == size)
return (-1);
return (0);
}
