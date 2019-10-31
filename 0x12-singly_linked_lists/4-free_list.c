#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: struct
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *a;
	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
}
