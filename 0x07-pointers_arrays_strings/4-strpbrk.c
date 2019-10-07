#include "holberton.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s : string
 * @accept : string
 * Return: string or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
if (*a++ == *s)
return (s);
++s;
}
return (0);
}
