#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: element of the list
 * @n: data
 * Return: the adress of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t **tracer;

	tracer = head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	while (*tracer)
		tracer = &(*tracer)->next;
	newnode->n = n;
	newnode->next = *tracer;
	*tracer = newnode;
	return (newnode);
}
