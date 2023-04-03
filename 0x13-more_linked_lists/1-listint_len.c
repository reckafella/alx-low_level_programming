#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of nodes
 * @h: points to head of linked list
 *
 * Return: integer - (number of nodes)
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
