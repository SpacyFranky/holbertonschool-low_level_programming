#include "holberton.h"
#include <stdlib.h>
/**
 * power2 - 2 power a
 * @a: given number.
 * Return: result.
 */
unsigned int power2(unsigned int a)
{
	unsigned int i, s;

	s = 1;
	for (i = 0 ; i < a ; i++)
		s = s * 2;
	return (s);
}


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number.
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1.
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, s, y;
	int x;

	if (b == NULL)
		return (0);

	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	x = atoi(b);
	i = 0;
	s = 0;
	while (x)
	{
		y = x % 10;
		s = s + (y * power2(i));
		x = x / 10;
		i++;
	}
	return (s);
}
