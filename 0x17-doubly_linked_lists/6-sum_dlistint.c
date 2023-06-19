#include "lists.h"

/**
  * sum_dlistint - sums all nodes' data
  * @head: doubly linked list's head node pointer
  * Return: sum
  */

int sum_dlistint(dlistint_t *head)
{
	int dsum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		dsum += head->n;
		head = head->next;
	}

	return (dsum);
}
