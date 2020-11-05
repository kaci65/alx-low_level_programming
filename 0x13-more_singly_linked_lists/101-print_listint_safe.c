#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer pointing to head of listint_t elements
 * Return: Number of nodes
 *         Exit (98) if the function fails
 */
size_t print_listint_safe(const listint_t *head)
{
	int num;

	num = 0;

	if (head != NULL)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);

			if (head->next >= head)
			{
				printf("-> [%p] %d\n", (void *)head->next, head->next->n);
				num++;
				break;
			}
			else
			{
				head = head->next;
				num++;
			}
		}
	}
	else
	{
		exit(98);
	}
	return (num);
}
