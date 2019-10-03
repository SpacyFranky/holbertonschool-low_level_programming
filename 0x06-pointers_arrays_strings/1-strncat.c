#include "holberton.h"
/**
 * *_strncat - check the code for Holberton School students.
 * @dest : destination.
 * @src : source.
 * @n : number of bytes.
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int l;
char *p;
l = 0;
for (i = 0 ; dest[i] != 0 ; i++)
l++;
if (n > l)
n = l;
for (i = 0 ; i < n ; i++)
{
dest[l + i] = src[i];
}
p = dest;
return (p);
}
