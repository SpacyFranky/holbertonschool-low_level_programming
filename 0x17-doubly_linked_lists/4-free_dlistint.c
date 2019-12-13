#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - a function that free a dlistint_t list.
 * @head: doubly linked list.
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *empty = NULL;

	while (head != NULL)
	{
		empty = head->next;
		free(head);
		head = empty;
	}
	free(head);
}
