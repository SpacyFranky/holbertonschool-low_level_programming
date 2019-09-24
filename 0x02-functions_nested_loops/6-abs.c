#include "holberton.h"
/**
* _abs - check the code for Holberton School students.
* @n : variable
* Return: Always 0.
*/
int _abs(int n)
{
if ((n == 0) || (n == 1))
_putchar (n + '0');
else if (n < 0)
_putchar (-n + '0');
else
_putchar (n * n + '0');
}
