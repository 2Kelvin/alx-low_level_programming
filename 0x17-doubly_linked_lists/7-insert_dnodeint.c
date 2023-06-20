#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint_end - add a new node at the end of the doubly linked list
  * @head: pointer to the address of the doubly linked list
  * @n: new node's data
  * Return: pointer to new node
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newTnode;
	dlistint_t *prevLastnode = *head;

	newTnode = malloc(sizeof(dlistint_t));
	if (newTnode == NULL)
		return (NULL);
	newTnode->n = n;
	newTnode->next = NULL;
	if ((*head) == NULL)
	{
		newTnode->prev = NULL;
		(*head) = newTnode;
		return (newTnode);
	}
	while (prevLastnode->next != NULL)
		prevLastnode = prevLastnode->next;
	newTnode->prev = prevLastnode;
	prevLastnode->next = newTnode;
	return (newTnode);
}

/**
  * add_dnodeint - add a new node at the beginning of a doubly linked list
  * @head: pointer to the doubly linked list's head pointer
  * @n: node data
  * Return: new head node
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newHnode;

	if ((*head) == NULL)
	{
		newHnode = malloc(sizeof(dlistint_t));
		if (newHnode == NULL)
			return (NULL);
		newHnode->n = n;
		newHnode->prev = NULL;
		newHnode->next = NULL;
		(*head) = newHnode;
		return (newHnode);
	}

	newHnode = malloc(sizeof(dlistint_t));
	if (newHnode == NULL)
		return (NULL);
	newHnode->n = n;
	newHnode->prev = NULL;
	newHnode->next = (*head);
	(*head)->prev = newHnode;
	(*head) = newHnode;
	return (newHnode);
}

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
