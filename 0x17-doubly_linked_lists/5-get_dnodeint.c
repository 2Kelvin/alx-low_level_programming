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

/**
  * get_dnodeint_at_index - get node at the given index in a doubly linked list
  * @head: pointer to the doubly linked list head node
  * @index: index to get node in list
  * Return: node found at the index
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodeIdx = 0;
	dlistint_t *h = head;
	dlistint_t *nodeFound;
	unsigned int dlen = dlistint_len(head);

	if (head == NULL)
		return (NULL);
	if (index >= dlen)
		return (NULL);
	while (h != NULL)
	{
		if (index == nodeIdx)
		{
			nodeFound = h;
			break;
		}
		nodeIdx++;
		h = h->next;
	}
	return (nodeFound);
}
