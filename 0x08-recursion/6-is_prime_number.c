#include "holberton.h"
/**
 * primetest - check the code for Holberton School students.
 * @n : variable
 * @i : variable
 * Return: 1 or 0.
 */
int prime(int n, int i)
{
if (n <= 1)
return (0);
else if (i >= n)
return (1);
if (n % i != 0 && i != n)
return (prime(i + 1, n));
else
return (0);
}

/**
 * is_prime_number - returns 1 if the input is a prime number otherwise 0.
 * @n : integer
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
return (prime(n, 2));
}
