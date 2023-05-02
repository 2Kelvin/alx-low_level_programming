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
