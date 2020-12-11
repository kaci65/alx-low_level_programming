#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of linked list
 * @head: pointer pointing to head of listint_t elements
 * @index:  index of the node that should be deleted. Index starts at 0
 * Return: -1 - If function fails
 *         Otherwise - 1 if it succeeds
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *node;
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
		node = node->next;
	}
	if (!node || !(node->next))
	{
		return (-1);
	}
	temp = node->next;
	node->next = temp->next;
	free(temp);

	return (1);

}
