#include "lists.h"

/**
 * *find_listint_loop - finds the loop in a linked list
 * @head: pointer pointing to a pointer of listint_t elements
 * Return: address of the node where the loop starts
 *         NULL - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowptr, *fastptr;
	
	slowptr = head->next;
	fastptr = (head->next)->next;

	if (slowptr && fastptr && fastptr->next)
	{
		slowptr = head;

		while (slowptr != fastptr)
		{
			fastptr = fastptr->next;
			slowptr = slowptr->next;
		}
		return (slowptr);
	}
	return (NULL);
}
