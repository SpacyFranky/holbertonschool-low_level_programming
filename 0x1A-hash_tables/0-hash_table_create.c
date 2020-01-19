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

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}

	if (size == 0)
		return (NULL);
	htable->size = size;

	return (htable);
}
