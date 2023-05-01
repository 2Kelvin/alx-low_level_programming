#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - frees linked list & sets head to NULL
  * @head: double pointer to linked list address
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *copyHead;

	/* no need to do anything if there's no linked list */
	if (head == NULL)
		return;

	/* if list, loop thro freeing its memory */
	while (*head != NULL)
	{
		copyHead = (*head)->next;
		free(*head);
		*head = copyHead;
	}
	/* setting the head to NULL */
	*head = NULL;
}
