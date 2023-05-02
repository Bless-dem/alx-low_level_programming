#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes
 * the head node of a listint_t linked list
 * @head: the head node to be deleted
 * Return: 0 on an empty list
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
