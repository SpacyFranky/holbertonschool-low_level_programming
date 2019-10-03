#include "holberton.h"
/**
 * *_strncpy - copies a string.
 * @dest : destination.
 * @src : source.
 * @n : number of bytes.
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
char *p;
for (i = 0 ; i < n && src[i] != 0 ; i++)
{
dest[i] = src[i];
}
for ( ; i < n ; i++)
dest[i] = '\0';
p = dest;
return (p);
}
