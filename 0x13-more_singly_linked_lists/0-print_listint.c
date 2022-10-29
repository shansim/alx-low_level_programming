#include "lists.h"

/**
* print_listint- A fuction that prints all elements of listint_t
* @h: a pointer to a node
*
* Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{

	int a;

	a = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		h = h->next;
		a++;

	}
	return (a);

}

