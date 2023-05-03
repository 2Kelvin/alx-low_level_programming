#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * reverse_listint - reverses a linked list
  * @head: double pointer to linked list
  * Return: pointer to first node of reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *bNode = NULL, *fNode = NULL;

	if (head)
	{
		while (*head)
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
