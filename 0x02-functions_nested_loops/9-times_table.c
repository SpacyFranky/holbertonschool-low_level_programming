#include "holberton.h"
/**
* times_table - check the code for Holberton School students.
*
* Return: Void.
*/
void times_table(void)
{
for (int i = 0 ; i <= 9 ; i++)
{
for (int j = 0 ; j <= 9 ; j++)
{
int n;
n = i * j;
if (n > 10)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
else
_putchar(n + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
return;
}
