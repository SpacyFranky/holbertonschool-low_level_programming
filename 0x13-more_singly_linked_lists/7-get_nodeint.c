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

	if (head == NULL)
		return (NULL);
	node = head;
	for (i = 0 ; i < index ; i++)
	{
		node = node->next;
	}
	return (node);
}
