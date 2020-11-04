#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: List containing elemnts/nodes to be printed
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
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
