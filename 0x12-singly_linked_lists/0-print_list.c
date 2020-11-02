#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: List containing elements/nodes to be printed
 * Return: List of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t listNodes;

	listNodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		listNodes++;
		h = h->next;
	}
	return (listNodes);
}
