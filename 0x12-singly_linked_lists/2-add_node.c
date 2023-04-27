#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - adds a new head node to the linked list
  * @head: head node pointer to pointer
  * @str: pointer to string in node
  * Return: address to inserted head node or NULL
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newHeadNodePtr;
	unsigned int strLength = 0;

	/* calculating the length of the string */
	while (str[strLength])
		strLength++;

	/* allocating memory for the newHeadNode */
	newHeadNodePtr = malloc(sizeof(list_t));
	/* check if memory was successfully created */
	if (newHeadNodePtr == NULL)
		return (NULL);

	/* assigning data & ptr to the new head node */
	newHeadNodePtr->str = strdup(str);
	newHeadNodePtr->len = strLength;
	newHeadNodePtr->next = (*head);
	(*head) = newHeadNodePtr;

	return (*head);
}
