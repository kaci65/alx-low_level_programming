#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: List containing elements/nodes to be printed
 * Return: List of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t list_nodes;

	list_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		list_nodes++;
		h = h->next;
	}
	return (list_nodes);
}
