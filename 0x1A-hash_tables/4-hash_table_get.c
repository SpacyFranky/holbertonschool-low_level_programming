#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * *hash_table_get - retrieves a value associated with a key.
 * @ht: hashtable.
 * @key: hashtable key.
 * Return: value of the key I am looking for.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t **head;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);
	if (ht->array == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	head = ht->array;
	while (head[index])
	{
		if (strcmp(head[index]->key, key) == 0)
			return (head[index]->value);
		head[index] = head[index]->next;
	}
	return (NULL);
}
