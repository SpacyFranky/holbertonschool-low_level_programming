#include "holberton.h"
/**
 * *_memcpy - check the code for Holberton School students.
 * @dest : destination
 * @src : source
 * @n : number of bytes
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *d = (char *)dest;
char *s = (char *)src;
for (i = 0 ; i < n ; i++)
d[i] = s[i];
return (d);
}
