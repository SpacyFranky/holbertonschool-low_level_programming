#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hashtable.
 * @key: key of bucket.
 * @value: value of bucket.
 * Return: 1 if it succeeded, 0 otherwhise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, **head;
	unsigned long int index;

	if (key[0] == '\0')
		return (0);
	if (ht == NULL)
		return (0);
	if (ht->array == NULL)
		return (0);

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	head = ht->array;
	index = key_index((unsigned char *)key, ht->size);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	head[index] = newnode;
	return (1);
}
