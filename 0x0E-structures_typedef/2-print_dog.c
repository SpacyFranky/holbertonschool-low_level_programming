#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d : variable of struct dog.
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
if (d != 0)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
