#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the array
 * Return: newHashTable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable = malloc(sizeof(hash_table_t));

	if (newHashTable == NULL)
		return (NULL);
	newHashTable->size = size;
	newHashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newHashTable->array == NULL)
		return (NULL);
	newHashTable->size = size;

	return (newHashTable);
}
