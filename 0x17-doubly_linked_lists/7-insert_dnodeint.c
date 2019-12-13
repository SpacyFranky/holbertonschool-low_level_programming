#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: doubly linked list.
 * @idx: index.
 * @n: value.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *node = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	while (idx - 1 > 0 && node != NULL)
	{
		node = node->next;
		idx--;
	}
	if (idx - 1 > 0)
		return (NULL);
	newnode->next = node->next;
	newnode->prev = node->prev->prev;
	node->next = newnode;
	return (newnode);
}
