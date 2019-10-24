#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - performs simple operations.
 * @argc: size arguments.
 * @argv: argument vecter.
 * Return: result.
 */
int main(int argc, char *argv[])
{
int (*s)(int, int);
int a, b;
int result;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
s = get_op_func(argv[2]);
if (s == NULL)
{
printf("Error\n");
exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
if ((!(strcmp(argv[2], "/") == 0) || (!strcmp(argv[2], "%")) == 0)
&& (b == 0))
{
printf("Error\n");
exit(100);
}
result = s(a, b);
printf("%d\n", result);
}
