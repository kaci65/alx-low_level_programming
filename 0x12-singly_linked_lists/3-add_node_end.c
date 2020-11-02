#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: Pointer pointing to head of list_t elements
 * @str: String to be added at the end of list_t list
 * Return: NULL - If function fails
 *         Otherwise - The address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_endNode, *tmp;
	int index;
	
	tmp = *head;

	new_endNode = malloc(sizeof(list_t));
	if (new_endNode == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (str[index])
	{
		index++;
	}

	new_endNode->str = strdup(str);
	if (new_endNode->str == NULL)
	{
		free(new_endNode);
		return (NULL);
	}
	
	new_endNode->len = index; /* link string */
	new_endNode->next = NULL;

	if (*head == NULL)
	{
		*head = new_endNode;
	}
	else
	{
		while (tmp->next != NULL) /* traverse to the last node */
		{
			tmp = tmp->next;
		}
		tmp->next = new_endNode; /* link address */
	}
	return (new_endNode);
}
