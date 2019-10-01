#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s : string
 * Return: void.
 */
void print_rev(char *s)
{
int i;
int l = 0;
for (i = 0 ; s[i] != 0 ; i++)
{
l++;
}
for (i = l - 1 ; s[i] > 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
