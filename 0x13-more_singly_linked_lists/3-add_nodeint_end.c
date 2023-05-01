#include "lists.h"
#include <stdio.h>
/**
 * *add_nodeint_end - a function that adds a new node to the end of a list
 * @head: a head pointer that point to the end of the list
 * @n: the new node at the end of the list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	(listint_t *)malloc(sizeof(listint_t));

	end_node->next->NULL

	if (*head == NULL)
	*head = end_node;
			return (NULL);
	end_node = *head;

	while (end_node != NULL)
	end_node = end_node->next;
	end_node->next = end_node;
}
