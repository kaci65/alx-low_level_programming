#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: Pointer pointing to head of list_t elements
 * @str: String to be added at the start of list_t list
 * Return: NULL - If function fails
 *         Otherwise - The address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_startNode;
	unsigned int index;

	new_startNode = malloc(sizeof(list_t));

	if (new_startNode == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (str[index])
	{
		index++;
	}

	new_startNode->str = strdup(str);

	if (new_startNode->str == NULL)
	{
		free(new_startNode);
		return (NULL);
	}

	new_startNode->len = index; /* link string */
	new_startNode->next = *head; /* link address */

	*head = new_startNode; /* make new node at first node */

	return (new_startNode);
}
