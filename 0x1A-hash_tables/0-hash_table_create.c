#include "hash_tables.h"
#include <stdlib.h>
/**
 * *hash_table_create - function that creates a hash table.
 * @size: size of the hash table.
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int i;

	htable = malloc(sizeof(hash_table_t) * size);
	if (htable == NULL)
		return (NULL);

	htable->array = malloc(sizeof(hash_node_t) * size);
	if (htable->array == NULL)
		return (NULL);

	if (size < 1)
		return (NULL);
	htable->size = size;

	for (i = 0; i < size; i++)
		htable->array[i] = NULL;

	return (htable);
}
