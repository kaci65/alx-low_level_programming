#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: Pointer pointing to the listint_t elements
 * Return: Head node’s data (n)
 *         Otherwise - 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *delete_head;
	int elem;

	if (*head == NULL)
	{
		return (0);
	}

	delete_head = *head;
	elem = delete_head->n;
	*head = (*head)->next;

	free(delete_head);

	return (elem);
}
