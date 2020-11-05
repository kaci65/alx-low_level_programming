#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer pointing to head of listint_t elements
 * @idx: index of the list where the new node should be added
 * @n: Element to be added at the start of the list
 * Return: NULL - If function fails
 *         Otherwise - The address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int index;

	new_node = malloc(sizeof(listint_t));

	if (!*head || !new_node)
	{
		return (NULL);
	}
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->n = n;
	current_node = *head;

	while (current_node)
	{
		for (index = 0; index < (idx - 1); index++)
		{
			current_node = current_node->next;
		}
		new_node->next = current_node->next;
		current_node->next = new_node;
		return (new_node);
	}
	return (NULL);
}
