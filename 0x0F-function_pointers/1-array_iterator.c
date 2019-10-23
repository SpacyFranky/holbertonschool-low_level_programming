#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter of array
 * @array: the input array.
 * @size: size of the array of type size_t (int).
 * @action: function that got action.
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && size != 0 && action != NULL)
{
for (i = 0 ; i < size ; i++)
action(array[i]);
}
}
