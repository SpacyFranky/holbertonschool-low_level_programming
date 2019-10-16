#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes it.
 * @size : size of array.
 * @c : the specific char.
 * Return: the char initialized in the array.
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
if (size != 0)
{
a = malloc(size * sizeof(char));
if (a == 0)
return (NULL);
else
{
for (i = 0 ; i < size ; i++)
a[i] = c;
return (a);
}
}
else
return (NULL);
}
