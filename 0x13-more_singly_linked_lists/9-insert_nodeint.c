#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - insert node at index
  * @head: double pointer to linked list
  * @idx: index where to add new node
  * @n: node data / value n
  * Return: pointer to inserted node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *copyHead = *head;
	listint_t *newNode;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (head == NULL || newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; i < idx && copyHead != NULL; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = copyHead->next;
			copyHead->next = newNode;
			return (newNode);
		}
		else
			copyHead = copyHead->next;
	}

	return (NULL);
}
