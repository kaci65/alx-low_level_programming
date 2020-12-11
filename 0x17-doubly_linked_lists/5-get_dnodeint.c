#include <stdlib.h>
#include "lists.h"

/**
 * *get_dnodeint_at_index -  returns the nth node of listint_t linked list
 * @head: Pointer pointing to head of listint_t elements
 * @index: Index of node starting at 0
 * Return: NULL - If node does not exist
 *         Otherwise - nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node;
	unsigned int count;

	nth_node = head;
	if (!nth_node)
	{
		return (NULL);
	}

	count = 0;
	while (nth_node)
	{
		if (count == index)
		{
			return (nth_node);
		}
		count++;
		nth_node = nth_node->next;
	}
	return (nth_node);
}
