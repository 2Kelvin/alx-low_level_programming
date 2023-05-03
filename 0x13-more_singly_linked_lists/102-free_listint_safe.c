#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * free_listint_safe - frees a linked list
  * @h: double pointer to list
  * Return: size of the list freed
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *copy;
	size_t listSize = 0;
	int m;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		m = *h - (*h)->next;
		if (m > 0)
		{
			copy = (*h)->next;
			free(*h);
			*h = copy;
			listSize++;
		}
		else
		{
			free(*h);
			*h = NULL;
			listSize++;
			break;
		}
	}
	*h = NULL;
	return (listSize);
}
