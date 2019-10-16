#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space
 *    in memory, which contains a copy of the string given as
 *   a parameter.
 * @str : string
 * Return: string
 */
char *_strdup(char *str)
{
char *ch;
int l, i;
l = 0;
for (i = 0 ; str[i] != 0 ; i++)
l++;
if (str != NULL)
{
ch = (char *)malloc(sizeof(char) * l + 1);
if (ch == NULL)
return (NULL);
for (i = 0 ; i <= l ; i++)
ch[i] = str[i];
return (ch);
}
else
return (NULL);
}
