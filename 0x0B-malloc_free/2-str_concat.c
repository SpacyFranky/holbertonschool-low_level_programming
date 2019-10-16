#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - check the code for H.
 * @s1 : first string
 * @s2 : second string
 * Return: a string concatinated between the first string and second.
 */
char *str_concat(char *s1, char *s2)
{
char *ch;
int i, j, l1, l2;
if (s1 != NULL && s2 != NULL)
{
l1 = 0;
for (i = 0 ; s1[i] != 0 ; i++)
l1++;
l2 = 0;
for (i = 0 ; s2[i] != 0 ; i++)
l2++;
}
ch = malloc(sizeof(char) * (l1 + l2 + 1));
if (ch == NULL)
return (NULL);
i = 0;
while (i < l1)
{
ch[i] = s1[i];
i++;
}
j = 0;
while (i < l1 + l2)
{
ch[i] = s2[j];
i++;
j++;
}
ch[i] = '\0';
return (ch);
free(ch);
}
