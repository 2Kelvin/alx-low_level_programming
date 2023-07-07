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
	hash_node_t *node = NULL;
	unsigned long int index;

	if (ht == NULL || strlen(key) == 0 || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while (strcmp(node->key, key) != 0)
		node = node->next;
	return (node->value);
}
