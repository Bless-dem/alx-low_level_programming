#include "lists.h"

/**
 * *add_nodeint - a function that adds a new node at the beginning
 * @head: points to the new node
 * @n: data to added to new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
		listint_t *new_node;

		new_node = (listint_t *)malloc(sizeof(listint_t));
		if (NULL)
		{
			return (NULL);
		}
		*head = new_node;
		new_node->next = next;
		next->n = n;
		return (new_node);
}
