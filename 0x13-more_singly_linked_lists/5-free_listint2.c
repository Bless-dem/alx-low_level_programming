#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - a  pointer that points to another free list
 *@head: this pointer points to another allocated free memory
 *Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	else
	{
		while (*head)
		{
			temp = (*head)->next;
			free(*head);
			(*head) = temp;
		}
		(*head) = NULL;
	}
}


