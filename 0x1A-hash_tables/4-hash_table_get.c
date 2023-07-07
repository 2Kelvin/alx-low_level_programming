#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - rertirives a value associated with a key
 * @ht: hash table
 * @key: array item key
 * Return: value at key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;

	if (ht == NULL || strlen(key) == 0 || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = 0; i < ht->size; i++)
	{
		if (i == index)
			return (ht->array[i]->value);
	}

	return (NULL);
}
