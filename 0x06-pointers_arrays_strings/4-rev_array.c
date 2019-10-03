#include "holberton.h"
/**
 * reverse_array - reverses array.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;
int b[20];
int j;
j = 0;
for (i = n - 1 ; i >= 0 ; i--)
{
b[j] = a[i];
j++;
}
for (i = 0 ; i < n ; i++)
a[i] = b[i];
}
