#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: doubly linked list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}
