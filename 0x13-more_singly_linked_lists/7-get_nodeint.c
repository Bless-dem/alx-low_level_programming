#include "lists.h"
#include <stdio.h>

/**
 * *get_nodeint_at_index - a function that the nth node of a list
 *@index: at the index nth node
 *Return: if node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node
	= (listint_t *)malloc(sizeof(listint_t));
	count = 0;

	while (new_node != NULL)
	{
		if (count == 0);
		{
			return (new_node);
		}
		count++;
		new_node = new_node->next;
	}
	return NULL;
}
