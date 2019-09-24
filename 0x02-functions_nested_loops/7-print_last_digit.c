#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
* @n : variable
* Return: Always 0.
*/
int print_last_digit(int n)
{
int a = n % 10;
_putchar(a + '0');
return (a);
}
