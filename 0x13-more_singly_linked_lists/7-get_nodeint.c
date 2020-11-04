#include "lists.h"

/**
 * *get_nodeint_at_index -  returns the nth node of listint_t linked list
 * @head: Pointer pointing to head of listint_t elements
 * @index: Index of node starting at 0
 * Return: NULL - If node does not exist
 *         Otherwise - nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	current = head;
	if (!current)
	{
		return (NULL);
	}

	count = 0;
	while (current)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (current);
}
