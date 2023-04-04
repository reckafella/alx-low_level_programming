#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: points to head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *ptr = h;

	count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);

		ptr = ptr->next;
		count++;
	}

	return (count);
}
