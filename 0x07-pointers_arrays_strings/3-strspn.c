#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s : string
 * @accept : string
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n;
char *p;
for (n = 0 ; *s ; s++, n++)
{
for (p = accept ; *p && *p != *s ; p++)
;
if (!*p)
break;
}
return (n);
}
