#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n) of listint_t list.
 * @head: element of the list
 * Return: sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int s;
	listint_t *node;

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
