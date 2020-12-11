#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a listint_t list
 * @head: Pointer pointing to the listint_t elements
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list_node;

	while (head != NULL)
	{
		list_node = head;
		head = head->next;
		free(list_node);
	}
}
