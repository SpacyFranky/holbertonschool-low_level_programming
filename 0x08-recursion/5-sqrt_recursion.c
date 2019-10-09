#include "holberton.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n : number
 * Return: result.
 */

int _sqrt_recursion(int n)
{
int small, large;
if (n == 0 || n == 1)
return (n);
else if (n < 0)
return (-1);
else
{
small = _sqrt_recursion(n >> 2) << 1;
large = small + 1;

if (((large *large) > n) && (n % small == 0))
return (small);
else if (((small *small) < n) && (n % large == 0))
return (large);
else
return (-1);
}
}
