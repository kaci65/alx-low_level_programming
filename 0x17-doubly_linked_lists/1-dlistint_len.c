#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements in linked dlistint_t list
 * @h: List containing elements/nodes to be returned
 * Return: Number of nodes in h
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
