#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @head: pointer pointing to a pointer of listint_t elements
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *aux;
	unsigned int num_free;

	if (*h == NULL)
	{
		return (0);
	}

	while (*h)
	{
		if ((*h)->next >= *h)
		{
			num_free++;
			break;
		}
		aux =(*h)->next;
		free(*h);
		*h = aux;
		num_free++;
	}
	*h = NULL;
	return (num_free);
}
