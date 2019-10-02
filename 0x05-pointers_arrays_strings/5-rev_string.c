#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s : string.
 * Return: Void.
 */
void rev_string(char *s)
{
int i;
int l;
int m;
l = 0;
for (i = 0 ; s[i] != 0 ; i++)
{
l++;
}
for (i = 0 ; i < l / 2 ; i++)
{
m = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = m;
}
}
