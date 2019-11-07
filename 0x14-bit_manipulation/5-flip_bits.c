#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: given number.
 * @m: the other number.
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int lastn, lastm;

	while (n || m)
	{
		lastn = n & 1;
		lastm = m & 1;
		if (lastn != lastm)
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
