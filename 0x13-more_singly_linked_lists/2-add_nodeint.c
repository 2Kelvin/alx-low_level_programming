#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - add node at the head of a linked list
  * @head: address of previous head node
  * @n: int data
  * Return: a pointer to the new head node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* dynamically creating the new node */
	listint_t *newHeadNode = malloc(sizeof(listint_t));

	/* returning NULL if creation is unsuccessful */
	if (newHeadNode == NULL)
		return (NULL);

	/* assigning data & pointer to the new node */
	newHeadNode->n = n;
	newHeadNode->next = *head;

	/* reassigning head pointer to carry the address of the new head node */
	*head = newHeadNode;

	return (newHeadNode);
	free(newHeadNode);
}
