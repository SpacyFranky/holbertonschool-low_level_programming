#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: doubly linked list.
 * @index: index.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node, *delete;

	if (*head == NULL)
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	while (i != index - 1)
	{
		node = node->next;
		if (node == NULL)
			return (-1);
		i++;
	}
	delete = node->next;
	node->next = delete->next;
	node->prev = delete->prev->prev;
	free(delete);
	return (1);
}
