#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * last_node_index - gets the last node of a doubly linked list.
 * @h: doubly linked list.
 * Return: last node of the list.
 */
unsigned int last_node_index(dlistint_t **h)
{
	unsigned int i = 0;
	dlistint_t *node = *h;

	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	return (i);
}


/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: doubly linked list.
 * @idx: index.
 * @n: value.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newnode, *temp = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	if (idx == 0 && h != NULL)
	{
		return (add_dnodeint(h, n)); /* insert at beginning */
	}
	if (idx == last_node_index(h) /* last node */)
	{
		return (add_dnodeint_end(h, n)); /* insert at end */
	}
	while (temp != NULL)
	{
		if (idx == i)
		{
			newnode->n = n;
			newnode->next = temp->next;
			newnode->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = newnode;
			temp->next = newnode;
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
