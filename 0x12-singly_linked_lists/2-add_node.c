#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: struct
 * @str: string
 * Return: returns the address of teh new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	char *s;
	list_t *newnode;

	newnode = malloc(sizeof(size_t));
	if (newnode == NULL)
		return (NULL);

	s = strdup(str);
	i = 0;
	while (s[i] != '\0')
		i++;
	newnode->str = s;
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
