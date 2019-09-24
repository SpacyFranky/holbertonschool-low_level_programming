#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
* @n : variable
* Return: same variable as input.
*/
int print_last_digit(int n)
{
if (n < 0)
{
n = -n;
n = n % 10;
}
else
{
n = n % 10;
}
_putchar(n + '0');
return (n);
}
