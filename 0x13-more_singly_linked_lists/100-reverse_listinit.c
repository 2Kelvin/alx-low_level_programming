#include "lists.h"
#include <stdlib.h>

/**
  * reverse_listint - reverses a linked list
  * @head: double pointer to linked list
  * Return: reversed linked list pointer
  */

listint_t *reverse_listint(listint_t **head)
{
	listint *bNode = NULL;
	listint *fNode = NULL;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			fNode = *head;
			*head = (*head)->next;
			fNode->next = bNode;
			bNode = fNode;
		}
		*head = bNode;

		return (*head);
	}
	return (NULL);
}
