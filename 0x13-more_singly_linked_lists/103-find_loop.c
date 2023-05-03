#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include "lists.h"

/**
  * find_listint_loop - find loop in a linked list
  * @head: linked list
  * Return: address where the loop starts
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *frPtr = head;
	listint_t *baPtr = head;

	if (head == NULL)
		return (NULL);

	while (frPtr != NULL && baPtr != NULL && baPtr->next)
	{
		baPtr = baPtr->next->next;
		frPtr = frPtr->next;

		if (baPtr == frPtr)
		{
			frPtr = head;

			while (frPtr != baPtr)
			{
				frPtr = frPtr->next;
				baPtr = baPtr->next;
			}

			return (baPtr);
		}
	}

	return (NULL);
}
