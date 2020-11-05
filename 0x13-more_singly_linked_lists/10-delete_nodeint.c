#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index index of linked list
 * @head: pointer pointing to head of listint_t elements
 * @index:  index of the node that should be deleted. Index starts at 0
 * Return: -1 - If function fails
 *         Otherwise - 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node;
	unsigned int count;

	node = *head;
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		node  = node->next;
	}
	if (!node || !(node->next))
	{
		return (-1);
	}
	tmp = node->next;
	node->next = tmp->next;
	free(tmp);

	return (1);
}
