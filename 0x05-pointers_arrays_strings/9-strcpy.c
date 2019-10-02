#include "holberton.h"
/**
 * *_strcpy - copies a string to another string.
 * @dest : destination.
 * @src : source.
 * Return: char value.
 */
char *_strcpy(char *dest, char *src)
{
int i;
int l;
l = 0;

while ((*(src + l) != '\0'))
l++;

for (i = 0 ; i <= l ; i++)
{
dest[i] = src[i];
}
return (&dest[0]);
}
