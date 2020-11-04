#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: Pointer pointing to head of listint_t elements
 * @n: Element to be added at the start of the list
 * Return: NULL - If function fails
 *         Otherwise - The address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_startnode;

	new_startnode = malloc(sizeof(listint_t));
	if (new_startnode == NULL)
	{
		return (NULL);
	}

	new_startnode->n = n;
	new_startnode->next = *head;

	*head = new_startnode;

	return (new_startnode);
}
