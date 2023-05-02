#include "lists.h"

/**
  * sum_listint - sum of all data in each node in a list
  * @head: pointer to linked list
  * Return: sum
  */

int sum_listint(listint_t *head)
{
	int sumNodeData = 0;
	listint_t *copyHead = head;

	while (copyHead != NULL)
	{
		sumNodeData += copyHead->n;
		copyHead = copyHead->next;
	}

	return (sumNodeData);
}
