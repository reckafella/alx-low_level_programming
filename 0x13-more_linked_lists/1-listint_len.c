#include <stddef.h>
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
	const listint_t *ptr = NULL;

	count = 0;
	ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
