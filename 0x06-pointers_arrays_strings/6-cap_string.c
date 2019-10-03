f#include "holberton.h"
/**
 * *cap_string - check the code for Holberton School students.
 * @c : character
 * Return: c.
 */
char *cap_string(char *c)
{
int i;
for (i = 0 ; c[i] != 0 ; i++)
{
if (i == 0)
{
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - 32;
}
}
if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n'
|| c[i] == ',' || c[i] == '.' || c[i] == ';' || c[i] == '!'
|| c[i] == '?' || c[i] == '"' || c[i] == '(' || c[i] == ')'
|| c[i] == '{' || c[i] == '}')
{
if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
c[i + 1] = c[i + 1] - 32;
}
}
return (c);
}
