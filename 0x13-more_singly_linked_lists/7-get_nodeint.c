#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node
  * @head: double pointer to list
  * @index: node index in list
  * Return: nth node pointer or NULL
  */

listint_t *get_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodeCount = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			if (nodeCount == index)
				return (head);

			head = head->next;
			nodeCount++;
		}
	}

	return (NULL);
}
