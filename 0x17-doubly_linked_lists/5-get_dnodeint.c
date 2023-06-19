#include "lists.h"

/**
  * get_dnodeint_at_index - get node at the given index in a doubly linked list
  * @head: pointer to the doubly linked list head node
  * @index: index to get node in list
  * Return: node found at the index
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodeIdx = 0;
	dlistint_t *h = head;
	dlistint_t *nodeFound;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	h = h->next;
	while (h != NULL)
	{
		nodeIdx++;
		if (index == nodeIdx)
			nodeFound = h;
		h = h->next;
	}
	return (nodeFound);
}
