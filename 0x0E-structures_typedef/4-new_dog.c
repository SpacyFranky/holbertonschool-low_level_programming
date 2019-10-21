#include "dog.h"
#include <stdlib.h>

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
int l1, l2, i;
l1 = 0;
l2 = 0;
a = malloc(sizeof(dog_t));
if (a == NULL)
return (NULL);
while (name[l1] != '\0')
l1++;
while (owner[l2] != '\0')
l2++;
a->name = malloc(sizeof(char) * (l1 + 1));
a->owner = malloc(sizeof(char) * (l2 + 1));
if (a->name == NULL || a->owner == NULL)
{
free(a->name);
free(a->owner);
free(a);
return (NULL);
}
for (i = 0 ; i < l1 ; i++)
a->name[i] = name[i];
a->name[i] = name[i];
for (i = 0 ; i < l2 ; i++)
a->owner[i] = owner[i];
a->age = age;
return (a);
}
