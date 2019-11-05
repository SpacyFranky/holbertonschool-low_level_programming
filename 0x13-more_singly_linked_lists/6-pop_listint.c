#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: head node of the list
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *node = NULL;
	int a;

	if (*head == NULL)
		return (-1);

	node = (*head)->next;
	a = (*head)->n;
	free(*head);
	*head = node;
	return (a);
}
