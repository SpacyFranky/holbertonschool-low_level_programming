#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc : argument count.
 * @argv : argument vector.
 * Return: is 0 / prints the sum of the numbers.
 */

int main(int argc, char *argv[])
{
int i, s, a;
if (argc == 1)
{
printf("0\n");
}
else
{
s = 0;
for (i = 1 ; i < argc ; i++)
{
a = atoi(argv[i]);
if (a <= 0)
{
printf("Error\n");
break;
}
else
s = s + a;
}
if (!(a <= 0))
{
printf("%d\n", s);
return (0);
}
else
return (1);
}
}
