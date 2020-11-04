#include <stdarg.h>
#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a list_t list
 * @head: Pointer pointing to head of list_t elements
 * @n: Element to be added at the end of list_t list
 * Return: NULL - If function fails
 *         Otherwise - The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_endnode, *last;

	new_endnode = malloc(sizeof(listint_t));
	if (new_endnode == NULL)
	{
		return (NULL);
	}

	new_endnode->n = n;
	new_endnode->next = NULL;

	if (!*head)
	{
		*head = new_endnode;
	}

	else
	{
		last = *head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = new_endnode;
	}
	return (new_endnode);
}
