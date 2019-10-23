#include <stdlib.h>
#ifndef _Function_Pointers_
#define _Function_Pointers_
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* _Function_Pointers_ */
