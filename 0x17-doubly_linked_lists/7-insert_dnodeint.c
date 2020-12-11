#include <stdlib.h>
#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer pointing to head of listint_t elements
 * @idx: index of the list where the new node should be added
 * @n: Element to be added at the start of the list
 * Return: NULL - If function fails
 *         Otherwise - The address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (!*h || !new_node)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	new_node->n = n;
	current_node = *h;

	for (i = 0; i < (idx - 1); i++)
	{
		current_node = current_node->next;
	}
	if (!current_node || !(current_node->next))
	{
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
