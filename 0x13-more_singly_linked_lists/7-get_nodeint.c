#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * get_nodeint_at_index - returns the nth node
  * @head: double pointer to list
  * @index: node index in list
  * Return: nth node pointer or NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *copyHead = head;
	unsigned int nodeidx = 0;

	while (copyHead != NULL && nodeidx < index)
	{
		copyHead = copyHead->next;
		nodeidx++;
	}

	if (copyHead != NULL)
		return (copyHead);
	else
		return (NULL);
}
