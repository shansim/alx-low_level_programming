#include "lists.h"
#include <stdio.h>

/**
 * list_len - function to return the number of elements in a list
 * @h: struct pointer
 *
 * Return: number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			h = h->next;
		}
	}
	return (i);
}
