#include "lists.h"

/**
 * sum_listint.c - return the sum of a listint_t list
 * @head: first node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (!(head))
		return (0);

	while (ptr)
	{
		sum = sum + (ptr->n);
		ptr = ptr->next;
	}

	return (sum);
}
