#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: nothing (void)
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *thisNode = NULL, *tempNode;

	if (ht == NULL)
		free(ht);

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			thisNode = ht->array[i];
			while (thisNode != NULL)
			{
				free(thisNode->key);
				free(thisNode->value);
				tempNode = thisNode;
				thisNode = thisNode->next;
				free(tempNode);
			}
		}
	}
	free(ht->array);
	free(ht);
}
