#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc : argument count.
 * @argv : argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int a, b, s;
if (argc == 3)
{
s = 1;
a = atoi(argv[1]);
b = atoi(argv[2]);
s = a *b;
printf("%d\n", s);
return (0);
argv[argc] = '\0';
}
else
{
printf("Error\n");
return (1);
}
}
