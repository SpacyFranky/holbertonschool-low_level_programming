#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

typedef struct stru
{
        char *ch;
	void (*n)(va_list);
} st;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* _HEADER_ */
