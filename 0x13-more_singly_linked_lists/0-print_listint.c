#include "lists.h"
#include <stdio.h>

/**
  * print_listint - print all nodes of a linked list & each node data
  * @h: linked list
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int nodeCount = 0;
	const listint_t *currentNodePtr = h;

	/* if the pointer to the linked list is not NULL */
	while (currentNodePtr != NULL)
	{
		/* count this node */
		nodeCount++;
		/* print its data / value */
		printf("%d\n", currentNodePtr->n);
		/* access the next node */
		currentNodePtr = currentNodePtr->next;
	}

	return (nodeCount);
}
