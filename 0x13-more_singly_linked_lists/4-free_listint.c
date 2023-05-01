#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - frees a linked list
  * @head: pointer to the linked list
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *copyHead;

	/* if there's no linked list, no need to free */
	if (head == NULL)
		return;
	/* if list, loop thro it and free all its nodes */
	while (head != NULL)
	{
		copyHead = head;
		head = head->next;
		free(copyHead);
	}
	free(head);
}
