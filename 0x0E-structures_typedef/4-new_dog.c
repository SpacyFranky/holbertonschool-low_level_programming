#include "dog.h"
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
if (str == 0)
return (NULL);
l = 0;
for (i = 0 ; str[i] != 0 ; i++)
l++;
l++;
ch = malloc(sizeof(char) * l);
if (ch == NULL)
return (NULL);
for (i = 0 ; i < l ; i++)
ch[i] = str[i];
ch[i] = '\0';
return (ch);
}

/**
 * *new_dog - creates a new dog.
 * @name : new dog's name
 * @age : new dog's age
 * @owner : new dog's owner
 * Return: nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *a;
char *n, *o;
n = _strdup(name);
o = _strdup(owner);
a = malloc(sizeof(dog_t) * 10);
a->name = name;
a->age = age;
a->owner = owner;
return (a);
free(n);
free(o);
}
