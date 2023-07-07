#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table array
 * @ht: hash_table
 * @key: item key
 * @value: item value
 * Return: 1 (success) & 0 (failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, n;
	hash_node_t *nodePair;

	if (strlen(key) == 0 || !value || !key || ht == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	for (n = i; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = strdup(value);
			return (1);
		}
	}

	nodePair = malloc(sizeof(hash_node_t));
	if (nodePair == NULL)
		return (0);
	nodePair->key = strdup(key);
	nodePair->value = strdup(value);
	nodePair->next = ht->array[i];
	ht->array[i] = nodePair;

	return (1);
}
