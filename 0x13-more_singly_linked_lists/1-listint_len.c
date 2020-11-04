#include "lists.h"

/**
 * listint_len - returns the number of elements in linked listint_t list
 * @h: List containing elements/nodes to be returned
 * Return: Number of nodes in h
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elem;

	num_elem = 0;
	while (h)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
