#include "lists.h"
#include <stdlib.h>

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
