#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - a function that frees a list
 *@head: this points to the allocated free memory
 *Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = head;
		while (temp != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}


