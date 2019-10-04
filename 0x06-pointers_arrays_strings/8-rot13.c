#include "holberton.h"
/**
 * *rot13 - check the code for Holberton School students.
 * @c : variable.
 * Return: string c.
 */
char *rot13(char *c)
{
int i, j;
char org[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0 ; c[i] != 0 ; i++)
{
for (j = 0 ; j < 53 ; j++)
{
if (org[j] == c[i])
{
c[i] = rot[j];
break;
}
}
}
return (c);
}
