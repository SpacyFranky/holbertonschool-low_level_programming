#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: the name that will be printed.
 * @f: function to print the name.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
