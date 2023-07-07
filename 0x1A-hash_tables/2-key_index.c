#include "hash_tables.h"

/**
 * key_index - calculates array index from hash code
 * @key: item's key
 * @size: size of hash table's array
 * Return: index to store the item in the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashCode = hash_djb2(key);
	unsigned long int index = hashCode % size;

	return (index);
}
