#include "lists.h"

/**
* listint_len - Returns the number of elements in a linked list
* @h: Singly linked list pointer
* Return: Number of elements in a linked list.
*/

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
