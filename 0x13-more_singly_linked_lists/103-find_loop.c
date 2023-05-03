#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bottle = head;
	listint_t *maji = head;

	if (head == NULL)
		return (NULL);

	while (bottle && maji && maji->next)
	{
		maji = maji->next->next;
		bottle = bottle->next;
		if (maji == bottle)
		{
			bottle = head;
			while (bottle != maji)
			{
				bottle = bottle->next;
				maji = maji->next;
			}
			return (maji);
		}
	}

	return (NULL);
}

