#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: List containing elemnts/nodes to be printed
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)

{
	size_t list_elem;

	list_elem = 0;

	while (h)
	{
		printf("%d\n", h->n);

		list_elem++;
		h = h->next;
	}
	return (list_elem);
}
