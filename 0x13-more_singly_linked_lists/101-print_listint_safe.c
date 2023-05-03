#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * print_listint_safe - prints a linked list
  * @head: pointer to list
  * Return: number of nodes in list
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t noOfNodes = 0;
	size_t i;
	const listint_t *copy = head, *c = NULL;

	while (copy != NULL)
	{
		printf("[%p] %d\n", (void *)copy, copy->n);
		noOfNodes++;
		copy = copy->next;
		c = head;
		i = 0;

		while (i  < noOfNodes)
		{
			if (copy == c)
			{
				printf("-> [%p] %d\n", (void *)copy, copy->n);
				return (noOfNodes);
			}
			c = c->next;
			i++;
		}

		if (head == NULL)
			exit(98);
	}

	return (noOfNodes);
}
