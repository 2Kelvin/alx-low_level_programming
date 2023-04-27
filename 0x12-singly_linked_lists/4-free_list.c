#include "lists.h"
#include <stdlib.h>

/**
  * free_list - free dynamically allocated linked list memory
  * @head: head pointer
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *temporaryPtr;

	while (head != NULL)
	{
		temporaryPtr = head;
		head = head->next;
		free(temporaryPtr->str);
		free(temporaryPtr);
	}

	free(head);
}
