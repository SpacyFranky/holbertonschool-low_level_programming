#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: element of the list.
 * @idx: index of the element.
 * @n: data.
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *node = *head;

	*newnode = (listint_t *)malloc(sizeof(listint_t));
	newnode->n = n;
	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->next = *head;
		return (newnode);
	}
	while (idx - 1 > 0)
	{
		node = node->next;
		idx--;
	}
	newnode->next = node->next;
	node->next = newnode;
	return (newnode);
}
