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
	listint_t *node;

	if (head == NULL)
		return (-1);
	node = *head;

	while (i - 1 > 0 && node != NULL)
	{
		node = node->next;
		idx--;
	}
	if (i - 1 > 0)
		return (-1);
	free(node);
	return (1);
}
