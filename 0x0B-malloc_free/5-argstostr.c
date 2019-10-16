#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac : number of arguments.
 * @av : string.
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
char *s;
int i, j, l;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0 ; i < ac ; i++)
{
for (j = 0 ; av[i][j] != '\0' ; j++)
l++;
}
s = malloc(sizeof(char) * ac + l + 1);
if (s == NULL)
return (NULL);
l = 0;
for (i = 0 ; i < ac ; i++)
{
for (j = 0 ; av[i][j] != '\0' ; j++)
{
s[l] = av[i][j];
l++;
}
s[l] = '\n';
l++;
}
return (s);
}
