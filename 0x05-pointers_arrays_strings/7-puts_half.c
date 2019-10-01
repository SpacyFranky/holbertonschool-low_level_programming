#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str : variable.
 * Return: Void.
 */
void puts_half(char *str)
{
int i;
int l;
int n;
for (i = 0 ; str[i] != 0 ; i++)
{
l++;
}
if (l % 2 == 0)
{
n = (l / 2) - 1;
for (i = n + 1 ; i < l ; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
