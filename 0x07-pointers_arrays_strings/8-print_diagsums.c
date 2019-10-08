#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a : multi-dimensional array
 * @size : size of the array
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
int x;
int i, s1, s2;
x = size * size;
s1 = 0;
s2 = 0;
i = 0;
while (i < x)
{
s1 += a[i];
i += size +1;
}
i = size - 1;
while (i < (x - 1))
{
s2 += a[i];
i += size - 1;
}
printf("%d, %d\n", s1, s2);
}
