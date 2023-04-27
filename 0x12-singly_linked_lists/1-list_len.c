#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * list_len - returns no of elements in linked list list_t
  * @h: pointer to linked list
  *
  * Return: no of nodes
  */
size_t list_len(const list_t *h)
{
	size_t noOfNodes = 0;

	while (h)
	{
		h = h->next;
		noOfNodes++;
	}

	return (noOfNodes);
}
