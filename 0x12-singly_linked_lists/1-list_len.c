#include "lists.h"

/**
 * list_len - returns the number of elements in linked list_t list
 * @h: List containing elements/nodes to be returned
 * Return: Number of nodes in h
 */

size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
