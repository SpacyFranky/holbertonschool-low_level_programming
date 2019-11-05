#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked lisint_t list.
 * @h: element of the list
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
