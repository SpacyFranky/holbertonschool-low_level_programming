#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 */
void print_binary(unsigned long int n)
{
	unsigned int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	mask = n;
	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
	}

}
