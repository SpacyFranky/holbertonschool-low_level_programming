#include "holberton.h"
/**
 * *_strcat - concatenates two strings.
 * @dest : destination.
 * @src : source.
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int i;
int l;
int k;
char *p;
l = 0;
for (i = 0 ; dest[i] != 0 ; i++)
l++;
k = 0;
for (k = 0 ; src[k] != 0 ; k++)
k++;
for (i = 0 ; i <= k ; i++)
{
dest[l + i] = src[i];
}
p = dest;
return (p);
}
