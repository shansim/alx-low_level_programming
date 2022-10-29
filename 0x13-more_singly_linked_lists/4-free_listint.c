#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *temp1, *temp2;

	temp1 = head;
	while (temp1 != NULL)
	{
	temp2 = temp1->next;
	free(temp1);
	temp1 = temp2;
	}
}
