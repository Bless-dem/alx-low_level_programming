#include "lists.h"
#include <stdio.h>

/**
 * *get_nodeint_at_index - a function that the nth node of a list
 * @head: pointer to head of the listint_t
 *@index: at the index nth node
 *Return: if node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (count != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		count++;
	}
	return (head);
}
