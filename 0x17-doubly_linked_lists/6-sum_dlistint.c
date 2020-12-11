#include <stdlib.h>
#include "lists.h"

void sum_dnodes(dlistint_t *head, int *sum);

/**
 * sum_dnodes - recursive function that passes next current
 *               node and sum variable
 * @head: Pointer pointing to the listint_t elements
 * @sum: Variable to store sum;
 * Return: Nothing
 */
void sum_dnodes(dlistint_t *head, int *sum)
{
	if (head == NULL)
	{
		return;
	}
	/* traverse nodes recursively */
	sum_dnodes(head->next, sum);

	*sum = *sum + head->n;

}

/**
 * sum_dlistint - returns the sum of all data (n) of listint_t list
 * @head: Pointer pointing to the listint_t elements
 * Return: 0 - if the list is empty
 *         Otherwise: Sum of elements in linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int node_sum = 0;

	sum_dnodes(head, &node_sum);
	return (node_sum);
}
