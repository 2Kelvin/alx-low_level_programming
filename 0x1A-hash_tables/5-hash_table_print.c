#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed out
 * Return: nothing (void)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int separator = 0;
	hash_node_t *thisNode = NULL;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (separator == 1)
				printf(", ");
			thisNode = ht->array[i];
			while (thisNode != NULL)
			{
				printf("'%s': '%s'", thisNode->key, thisNode->value);
				thisNode = thisNode->next;
				if (thisNode != NULL)
					printf(", ");
			}
			separator = 1;
		}
	}
	printf("}\n");
}
