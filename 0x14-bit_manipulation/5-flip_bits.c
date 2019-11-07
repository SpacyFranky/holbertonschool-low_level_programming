#include "holberton.h"

/**
 * count - counts bits
 * @a: number.
 * Return: counted bits.
 */
unsigned int count(unsigned int a)
{
	unsigned int c = 0;

	while (a)
	{
		c = c + (a & 1);
		a >>= 1;
	}
	return (c);
}

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: given number.
 * @m: the other number.
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	return (count(n ^ m));
}
