#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - prints type char
 * @c: variable.
 * Return: nothing.
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - prints type int
 * @i: variable.
 * Return: nothing.
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints type float
 * @f : variable.
 * Return: nothing.
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_s - prints type float
 * @s : variable.
 * Return: nothing.
 */
void print_s(va_list s)
{
	char *a = va_arg(s, char *);

	if (a != NULL)
	{
		printf("%s", a);
		return;
	}
	printf("(nil)");
}


/**
 * print_all - prints anything.
 * @format: format of the variable.
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	st array[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_list valist;
	unsigned int i, j;
	void (*fun)(va_list);
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (array[j].ch != NULL)
		{
			if (array[j].ch[0] == format[i])
			{
				printf("%s", separator);
				fun = array[j].n;
				fun(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
