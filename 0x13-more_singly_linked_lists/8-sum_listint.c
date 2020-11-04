#include "lists.h"

void sum_ofnodes(listint_t *head, int *sum);

/**
 * sum_ofnodes - recursive function that passes next current
 *               node and sum variable
 * @head: Pointer pointing to the listint_t elements
 * @sum: Variable to store sum;
 * Return: Nothing
 */
void sum_ofnodes(listint_t *head, int *sum)
{
	if (!head)
	{
		return;
	}

	sum_ofnodes(head->next, sum); /* traverse nodes recursively */

	*sum = *sum + head->n;
}

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: Pointer pointing to the listint_t elements
 * Return: Sum of elements in linked list
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	sum_ofnodes(head, &sum);

	return (sum);
}
