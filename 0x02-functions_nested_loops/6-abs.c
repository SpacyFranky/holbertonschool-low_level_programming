#include "holberton.h"
/**
* _abs - check the code for Holberton School students.
* @n : variable
* Return: Always 0.
*/
int _abs(int n)
{
if (n < 0)
_putchar (-n + '0');
else
_putchar (n + '0');
return (0);
}
