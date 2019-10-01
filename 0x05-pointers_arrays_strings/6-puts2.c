#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 * @str : variable.
 * Return: Void.
 */
void puts2(char *str)
{
int i;
for (i = 0 ; str[i] != 0 ; i++)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
