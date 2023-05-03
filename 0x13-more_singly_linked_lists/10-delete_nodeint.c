#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * delete_nodeint_at_index - deletes the node at the index passed in
  * @head: double pointer to list
  * @index: node position in list
  * Return: 1 (successful) or -1 (failed)
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *currentPtr = NULL;
	listint_t *temporaryPtr = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temporaryPtr);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temporaryPtr == NULL || (temporaryPtr->next) == NULL)
			return (-1);
		temporaryPtr = temporaryPtr->next;
	}
	currentPtr = temporaryPtr->next;
	temporaryPtr->next = currentPtr->next;
	free(currentPtr);

	return (1);
}
