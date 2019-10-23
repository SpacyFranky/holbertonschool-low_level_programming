#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: the name that will be printed.
 * @f: function to print the name.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
