#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @array: array of integers
 * @left: start of index
 * @right: end of index
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	if (array == NULL)
		return;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		if (i == right - 1)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (array == NULL)
		return (-1);

	print_array(array, 0, size);
	l = 0;
	r = size - 1;
	while (l < r)
	{
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
			return (m);
		print_array(array, l, r + 1);
	}
	return (-1);
}
