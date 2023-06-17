#include <stdio.h>
#include "lists.h"

/**
  * dlistint_len - returns the number of nodes in a doubly linked list
  * @h: head pointer to doubly linked list
  * Return: number of nodes
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t noOfNodes = 0;

	if (h == NULL)
		return (noOfNodes);

	noOfNodes++;
	h = h->next;
	while (h != NULL)
	{
		noOfNodes++;
		h = h->next;
	}

	return (noOfNodes);
}
