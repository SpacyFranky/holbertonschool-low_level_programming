#include "holberton.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s : variable
 * @b : variable
 * @n : number of bytes
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n > 0)
{
*p = b;
p++;
n--;
}
return (s);
}
