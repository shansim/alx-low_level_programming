#include "lists.h"

/**
* add_nodeint - func adds a new node at the beginning of list
* @head: pointer to a pointer that points the first node
* @n: integer variable to be taken as input to the node
*
* Return: the address of the new element, or NULL if it failed
*/


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	/*allocates memory and checks if null*/
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	/*assign new values*/
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
