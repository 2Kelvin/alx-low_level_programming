#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint - add a new node at the beginning of a doubly linked list
  * @head: pointer to the doubly linked list's head pointer
  * @n: node data
  * Return: new head node
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newHnode;

	newHnode = malloc(sizeof(dlistint_t));
	if (newHnode == NULL)
		return (NULL);
	newHnode->n = n;
	newHnode->prev = NULL;
	newHnode->next = (*head);
	if ((*head) != NULL)
		(*head)->prev = newHnode;
	(*head) = newHnode;
	return (newHnode);
}
