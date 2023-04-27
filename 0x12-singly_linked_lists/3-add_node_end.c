#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - add a new tail node to a linked list
  * @head: head node pointer to pointer
  * @str: string pointer
  * Return: pointer to tail node or NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newTailNodePtr;
	unsigned int strLength = 0;
	list_t *tempPtr = *head;

	while (str[strLength])
		strLength++;

	newTailNodePtr = malloc(sizeof(list_t));
	if (newTailNodePtr == NULL)
		return (NULL);

	newTailNodePtr->str = strdup(str);
	newTailNodePtr->len = strLength;
	/* .next should return NULL because it's the last node in the linked list */
	newTailNodePtr->next = NULL;

	/* if linked list had no nodes add newTailNode as the only node in the list */
	if (*head == NULL)
	{
		*head = newTailNodePtr;
		return (newTailNodePtr);
	}

	while (tempPtr->next != NULL)
		tempPtr = tempPtr->next;
	tempPtr->next = newTailNodePtr;

	return (newTailNodePtr);
}
