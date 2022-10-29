#include "lists.h"

/**
 * add_nodeint_end - Function
 *
 * Description: adds a new node at the end of a listint_t list
 *
 * @head: pointer to pointer of type listint_t
 * @n: constant parameter of type int
 *
 * Return: returns address to created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	/*allocating memory to the newnode*/
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = 0;
	temp = *head;
	if (temp == NULL)
		*head = newnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
