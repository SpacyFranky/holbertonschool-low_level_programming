#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: struct
 * Return: nothing.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head->len);
		head = head->next;
	}
}
