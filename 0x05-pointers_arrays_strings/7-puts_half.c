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
for (i = 0 ; str[i] != 0 ; i++)
{
l++;
}
if (l % 2 != 0)
l++;
for (i = l / 2 ; i <= l ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
