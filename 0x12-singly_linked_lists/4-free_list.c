#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: struct
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *a = NULL;
	while (head != NULL)
	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
	free(head);
}
