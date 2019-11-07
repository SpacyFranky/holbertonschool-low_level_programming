#include "holberton.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: given number.
 * @index: given index.
 * Return: the value of the bit at index which is index or -1 if ther is error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 31)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
