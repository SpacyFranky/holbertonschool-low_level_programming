#include "holberton.h"
/**
 * *leet - encodes the string into 1337.
 * @c : string.
 * Return: string.
 */
char *leet(char *c)
{
char a[] = "4433007711";
char b[] = "aAeEoOtTlL";
int i;
int j;
for (i = 0 ; c[i] != 0 ; i++)
{
for (j = 0 ; a[j] != 0 ; j++)
{
if (c[i] == b[j])
c[i] = a[j];
}
}
return (c);
}
