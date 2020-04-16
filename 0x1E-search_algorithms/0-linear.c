#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	int *p, i;

	if (array == NULL)
		return (-1);

	i = 0;
	for (p = array; p < array + size; ++p)
	{
		printf("Value checked array[%d] = [%d]\n", i, *p);
		if (*p == value)
			return (i);
		i++;
	}
	return (-1);
}
