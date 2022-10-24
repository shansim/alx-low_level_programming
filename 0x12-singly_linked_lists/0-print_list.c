#include "lists.h"
#include <stdio.h>


/**
 * print_list - Prints all the elements of a struct list
 * @h: the struct
 * Return: the numn=ber of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == 0)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
	}
	return (i);
}
