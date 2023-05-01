#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements
 * @h: head of listint_t
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
	unsigned int  x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
