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

	while (frPtr != NULL && frPtr->next != NULL)
	{
		baPtr = head->next;
		frPtr = frPtr->next->next;
		if (baPtr == frPtr)
		{
			head = frPtr->next;
			break;
		}
	}
	return (frPtr);
}
