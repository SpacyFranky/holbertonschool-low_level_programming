#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: doubly linked list.
 * Return: sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int s;
	dlistint_t *node;

	if (head == NULL)
		return (0);
	node = head;
	s = 0;
	while (node != NULL)
	{
		s = s + node->n;
		node = node->next;
	}
	return (s);
}
