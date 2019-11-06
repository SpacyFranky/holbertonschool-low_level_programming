#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index of linked list.
 * @head: head of list.
 * @index: index of the element
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *delete;

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
	free(delete);
	return (1);
}
