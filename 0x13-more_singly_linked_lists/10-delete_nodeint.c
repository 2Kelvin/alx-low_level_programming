#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes head node & returns next node's data
  * @head: double pointer to linked list
  * Return: next head node's data
  */

int pop_listint(listint_t **head)
{
	listint_t *nextHead;
	int nextHeadData;

	/* if there's no linked list return 0 */
	if (*head == NULL)
		return (0);
	/* accessing the 2nd node in the list */
	nextHead = (*head)->next;
	/* assigning it's data, stored in n */
	nextHeadData = (*head)->n;
	/* deleting the old head from memory */
	free(*head);
	/* making the next node the head */
	*head = nextHead;

	return (nextHeadData);
}

/**
  * delete_nodeint_at_index - deletes the node at the index passed in
  * @head: double pointer to list
  * @index: node position in list
  * Return: 1 (successful) or -1 (failed)
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *currentPtr = *head;
	listint_t *temporaryPtr = NULL;

	if (index == 0)
		return (pop_listintt(head));
	for (i = 0; i < (index - 1); i++)
	{
		if (currentPtr->next == NULL)
			return (-1);
		currentPtr = currentPtr->next;
	}
	if (currentPtr->next == NULL)
		return (-1);
	temporaryPtr = currentPtr->next;
	currentPtr->next = temporaryPtr->next;
	free(temporaryPtr);

	return (1);
}
