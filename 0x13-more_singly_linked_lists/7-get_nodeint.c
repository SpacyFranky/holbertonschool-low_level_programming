#include "lists.h"
#include <stdlib.h>
/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: element of the list.
 * @index: index of the list.
 * Return: the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	i = 0;
	node = head;
	while (node != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
