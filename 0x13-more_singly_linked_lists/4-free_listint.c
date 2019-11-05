#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *node = NULL;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
