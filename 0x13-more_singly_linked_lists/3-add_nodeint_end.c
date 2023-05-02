#include "lists.h"
#include <stdio.h>
/**
 * *add_nodeint_end - a function that adds a new node to the end of a list
 * @head: a head pointer that point to the end of the list
 * @n: the data assigned for new node at the end of the list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *end_node = (listint_t *)malloc(sizeof(listint_t));

	if (end_node == NULL && *head == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;
	if (!(*head))
	{
		*head = end_node;
		return (end_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end_node;
	return (end_node);
}
