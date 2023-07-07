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
	unsigned long int i;
	hash_node_t *nodePair;

	if (strlen(key) == 0 || !value || !key || ht == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL)
		return (0);

	if (ht->array[i] == NULL)
	{
		nodePair = malloc(sizeof(hash_node_t));
		if (nodePair == NULL)
			return (0);
		nodePair->key = (char *)key;
		nodePair->value = (char *)value;
		nodePair->next = ht->array[i];
		ht->array[i] = nodePair;
	}
	else
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			free(ht->array[i]->value);
		ht->array[i]->value = strdup(value);
		return (1);
	}

	return (1);
}
