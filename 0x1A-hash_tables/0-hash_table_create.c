#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the array
 * Return: newHashTable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable = malloc(sizeof(size));
	unsigned long int i;

	if (newHashTable == NULL)
		return (NULL);
	newHashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newHashTable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		newHashTable->array[i] = NULL;
	newHashTable->size = size;

	return (newHashTable);
}
