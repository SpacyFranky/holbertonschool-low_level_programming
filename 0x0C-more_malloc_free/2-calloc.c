#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb : array of elements
 * @size : size of array
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * size);
if (a == 0)
return (NULL);
for (i = 0 ; i < size ; i++)
a[i] = 0;
return (a);
}
