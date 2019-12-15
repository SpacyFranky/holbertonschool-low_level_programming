#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: doubly linked list.
 * @idx: index.
 * @n: value.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned i;
	dlistint_t *newnode, *temp = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	if (h == NULL)
		return (NULL);
	else
	{
		i = 1;
		while (i < idx - 1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (idx == 1)
			add_dnodeint(&temp, n); /* insert at beginning */
		else if (temp == /* last node */)
			add_dnodeint_end(&temp, n); /* insert at end */
		else if (temp != NULL)
		{
			newnode->n = n;
			newnode->next = temp->next;
			newnode->prev = temp;

			if (temp->next != NULL)
				temp->next->prev = newnode;

			temp->next = newnode;
			return (*temp);
		}
		else
			return (NULL);
	}
}
