#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
* @n : variable
* Return: same variable as input.
*/
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
n = -n;
_putchar(n + '0');
return (n);
}
