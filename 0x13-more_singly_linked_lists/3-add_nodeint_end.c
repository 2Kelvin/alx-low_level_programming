#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - adds a tail node to a linked list
  * @head: address to head node
  * @n: data
  * Return: pointer to tailNode
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode, *headCopy;

	/* dynamically allocating memory for tail node */
	lastNode = malloc(sizeof(listint_t));
	if (lastNode == NULL)
		return (NULL);
	/* allocating data & ptr to tailNode */
	lastNode->n = n;
	/* since it's the last node, it's shouldn't point to any node */
	lastNode->next = NULL;

	/* if the linked list was empty, this node is the tail & head node */
	if (*head == NULL)
	{
		*head = lastNode;
		return (*head);
	}
	else
	{
		headCopy = *head;
		/* if linked list is not empty, loop thro it */
		while (headCopy->next != NULL)
			headCopy = headCopy->next;
		/* add lastNode as the last / tail node */
		headCopy->next = lastNode;
		return (headCopy);
	}
	free(lastNode);
}
