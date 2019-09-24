#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - check the code for Holberton School students.
* @n : variable
* Return: Always 0.
*/
void print_to_98(int n)
{
int i;
if (n < 98)
{
i = 0;
while (i <= 98)
{
_putchar(i + '0');
if (i < 98)
printf(", ");
i++;
}
}
else
{
i = n;
while (i >= 98)
{
_putchar(i + '0');
if (i > 98)
printf(", ");
i--;
}
}
return;
}
