#include <stdio.h>
#include "lists.h"
/**
  * print_list - prints all list_s list
  * @h: linked list
  * Return: number of nodes in linked list
  */

size_t print_list(const list_t *h)
{
	size_t noOfNodes = 0;

	/* while list is not empty */
	while (h != NULL)
	{
		/* if str is NULL, print [0] (nil) */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		noOfNodes++;
	}

	return (noOfNodes);
}
