#include <stdlib.h>
#include "lists.h"

/**
  * free_dlistint - free double linked list
  * @head: head pointer to a doubly linked list
  * Return: void
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode = head;
	dlistint_t *nextNode;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}
}
