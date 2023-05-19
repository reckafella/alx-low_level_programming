#include "lists.h"

/**
 * dlistint_len - print all elements of a doubly linked list
 * @h: pointer to first node
 *
 * Return: number of nodes/elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = (*ptr).next;
		count++;
	}

	return (count);
}
