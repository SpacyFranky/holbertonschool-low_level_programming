#include "holberton.h"
/**
* times_table - check the code for Holberton School students.
* void function
* Return: Void.
*/
void times_table(void)
{
int i = 0;
while (i <= 9)
{
int j = 0;
while (j <= 9)
{
int n;
n = i * j;
if (n >= 10)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
else
_putchar(n + '0');
if (j < 9)
{
_putchar(',');
if (n >= 10)
_putchar(' ');
else
{
_putchar(' ');
_putchar(' ');
}
}
j++;
}
i++;
_putchar('\n');
}
return;
}
