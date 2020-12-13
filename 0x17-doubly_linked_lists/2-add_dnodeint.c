#include <stdlib.h>
#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a listint_t list
 * @head: Pointer pointing to head of listint_t elements
 * @n: Element to be added at the start of the list
 * Return: NULL - If function fails
 *         Otherwise - The address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_first;

	new_first = malloc(sizeof(dlistint_t));

	if (new_first == NULL)
	{
		return (NULL);
	}
	new_first->n = n;
	new_first->prev = NULL;
	new_first->next = *head;

	if (*head)
	{
		(*head)->prev = new_first;
	}

	*head = new_first;
	return (new_first);
}
