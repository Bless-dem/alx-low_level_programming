#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that prints all the elements
 * @h: head of listint_t
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{
	unsigned int  x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
