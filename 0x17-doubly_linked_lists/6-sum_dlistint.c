#include "lists.h"

/**
 * sum_dlistint - sumation of n in all nodes
 * @head: pointer to first node
 *
 *  Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		head = head->next;
		sum += head->n;
	}

	return (sum);
}
