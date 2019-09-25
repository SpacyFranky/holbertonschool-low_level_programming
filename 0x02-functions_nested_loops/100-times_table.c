#include "holberton.h"
/**
* print_times_table - check the code for Holberton School students.
* @n : varibale
* Return: Always 0.
*/
void print_times_table(int n)
{
int i, j, m;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
m = i * j;
if (m == 0 && j == 0)
{
_putchar(m + '0');
}
else
{
if (m < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(m + '0');
}
else if (m < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(m / 100 + '0');
_putchar((m % 100) / 10 + '0');
_putchar(m % 10 + '0');
}
}
}
_putchar('\n');
}
}
}
