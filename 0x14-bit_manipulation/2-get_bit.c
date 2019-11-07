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

	bit = (n >> index) & 1;
	if (bit == 0 || bit == 1)
		return (bit);
	else
		return (-1);
}
