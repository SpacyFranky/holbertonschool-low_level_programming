#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
* @n : variable
* Return: same variable as input.
*/
int print_last_digit(int n)
{
int a;
if (n >= 0)
a = n % 10;
else
a = (n % 10) * -1;
_putchar(a + '0');
return (a);
}
