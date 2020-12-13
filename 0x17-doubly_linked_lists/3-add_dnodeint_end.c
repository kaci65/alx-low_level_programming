#include <stdlib.h>
#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a list_t list
 * @head: Pointer pointing to head of list_t elements
 * @n: Element to be added at the end of list_t list
 * Return: NULL - If function fails
 *         Otherwise - The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end, *tmp;

	new_end = malloc(sizeof(dlistint_t));
	if (new_end == NULL)
	{
		return (NULL);
	}
	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
	{
		new_end->prev = NULL;
		*head = new_end;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_end;
		new_end->prev = tmp;
	}
	return (new_end);
}
