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

/**
  * insert_dnodeint_at_index - insert node at a given index
  * @h: pointer to double linked list head node pointer
  * @idx: index to insert node
  * @n: new node's data
  * Return: new node added at index
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *currentNode = *h;
	unsigned int nodeIdx = 0;
	unsigned int dlen = dlistint_len((*h));

	if ((*h) == NULL)
		return (NULL);
	if (idx >= dlen)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	while (currentNode != NULL)
	{
		if (idx == 0)
		{
			newNode = add_dnodeint(h, n);
			break;
		}
		else if (idx == (dlen - 1))
		{
			newNode = add_dnodeint_end(h, n);
			break;
		}
		else if (idx == nodeIdx)
		{
			newNode->n = n;
			newNode->next = currentNode;
			newNode->prev = (currentNode->prev);
			(currentNode->prev)->next = newNode;
			currentNode->prev = newNode;
			dlen++;
			break;
		}
		nodeIdx++;
		currentNode = currentNode->next;
	}

	return (newNode);
}
