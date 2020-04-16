#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 */
int linear_search(int *array, size_t size, int value)
{
	int *p, i;

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
