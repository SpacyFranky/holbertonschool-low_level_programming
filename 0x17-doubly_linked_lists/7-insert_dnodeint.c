#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * last_node - gets the last node of a doubly linked list.
 * @h: doubly linked list.
 * Return: last node of the list.
 */
dlistint_t *last_node(dlistint_t **h)
{
	dlistint_t *node = *h;

	while (node != NULL)
	{
		node = node->next;
	}
	return (node);
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
	i = 0;
	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (idx == 0)
	{
		add_dnodeint(&temp, n); /* insert at beginning */
		return (temp);
	}
	else if (temp == last_node(h) /* last node */)
	{
		add_dnodeint_end(&temp, n); /* insert at end */
		return (temp);
	}
	else if (temp != NULL)
	{
		newnode->n = n;
		newnode->next = temp->next;
		newnode->prev = temp;
		if (temp->next != NULL)
			temp->next->prev = newnode;
		temp->next = newnode;
		return (temp);
	}
	return (NULL);
}
