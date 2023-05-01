#include "lists.h"
#include <stdio.h>

/**
  * listint_len - lists the number of nodes in a linked list
  * @h: linked list
  * Return: no of nodes
  */

size_t listint_len(const listint_t *h)
{
	int nodeCount = 0;
	const listint_t *currentNodePtr = h;

	while (currentNodePtr != NULL)
	{
		nodeCount++;
		currentNodePtr = currentNodePtr->next;
	}

	return (nodeCount);
}
