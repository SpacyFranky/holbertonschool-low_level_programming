#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: doubly linked list.
 * @n: value.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *last = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = newnode;
	newnode->prev = last;
	return (newnode);
}
