#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1 : first string
 * @s2 : second string
 * @n : number of bytes
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ch;
unsigned int i, j, l1, l2;
i = 0;
j = 0;
l1 = 0;
l2 = 0;
if (s1 != NULL)
{
while (s1[l1] != '\0')
l1++;
}
if (s2 != NULL)
{
while (s2[l2] != '\0')
l2++;
}
if (n >= l2)
n = l2;
ch = malloc(sizeof(char) * (l1 + n + 1));
if (ch == 0)
return (NULL);
while (i < l1)
{
ch[i] = s1[i];
i++;
}
while (i < l1 + n)
{
ch[i] = s2[j];
i++;
j++;
}
ch[i] = '\0';
return (ch);
}
