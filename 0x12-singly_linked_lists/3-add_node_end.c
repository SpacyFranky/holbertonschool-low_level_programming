#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * *add_node_end - adds a new node at the beginning of a list_t list
 * @head: struct
 * @str: string
 * Return: returns the address of teh new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *newnode;
	list_t **tracer;
	char *s;

	tracer = head;
	newnode = malloc(sizeof(size_t));
	if (newnode == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	while (*tracer)
	{
		tracer = &(*tracer)->next;
	}
	s = strdup(str);
	newnode->str = s;
	newnode->len = i;
	newnode->next = *tracer;
	*tracer = newnode;
	return (newnode);
}
