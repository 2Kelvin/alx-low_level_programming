#include <stdio.h>
#include "lists.h"

/**
  * print_dlistint - prints each node data
  * @h: head pointer to the doubly linked list
  * Return: number of nodes in the doubly linked list
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t noOfNodes = 0;

	if (h == NULL)
		return (noOfNodes);

	printf("%d\n", h->n);
	noOfNodes++;
	h = h->next;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		noOfNodes++;
		h = h->next;
	}

	return (noOfNodes);
}
